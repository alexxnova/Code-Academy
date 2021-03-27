#include "BattleField.h"
#include "Vector.h"
#include "Defines.h"
#include "Airship.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TerranAirship.h"
#include "ProtossAirship.h"

void deleteLastShipFromString(char* str){
  str[strlen(str)-1] = '\0';
}


void generateTerranFleet(BattleField *battleField, const char *terranFleetStr) {
  vectorInit(&battleField->terranFleet, strlen(terranFleetStr));
  int i = 0;
  while (terranFleetStr[i] != '\0'){
      TerranAirship* terranAirship;
      initTerranAirship(&terranAirship, terranFleetStr[i]);
      vectorPush(&battleField->terranFleet,terranAirship);  
    i++;
  }
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr) {
  vectorInit(&battleField->protossFleet, strlen(protossFleetStr));
  int i = 0;
  while (protossFleetStr[i] != '\0'){
      ProtossAirship* protossAirship;
      initProtossAirship(&protossAirship, protossFleetStr[i]);
      vectorPush(&battleField->protossFleet, protossAirship);  
    i++;
  }
}

void startBattle(BattleField *battleField) {
  int turn = 0;
  while (true) {
    turn ++;
    if (processTerranTurn(battleField, turn)) {
      printf("TERRAN has won!\n");
      break;
    }

    if (processProtossTurn(battleField)) {
      printf("PROTOSS has won!\n");
      break;
    }
  }
}

bool processTerranTurn(BattleField *battleField, int turn) {
  int terranSize = battleField->terranFleet.size;
  ProtossAirship* lastOfProtoss;
  lastOfProtoss = (ProtossAirship*)vectorBack(&battleField->protossFleet);
  int lastProtossID;
  
  for (int i = 0; i < terranSize; i++){
    lastProtossID = battleField->protossFleet.size-1;
    TerranAirship* terranAirship = (TerranAirship*)vectorGet(&battleField->terranFleet, i);
    TerranAtack(lastOfProtoss, terranAirship, turn);

    if(lastOfProtoss->health <= 0){
      // If Terran killed Protoss ship, prints out Terran ship name and ID and last Protoss ID
      printDeadProtoss(terranAirship,  i, lastProtossID);
      vectorPop(&battleField->protossFleet);
      lastProtossID = battleField->protossFleet.size-1;
      lastOfProtoss = (ProtossAirship*)vectorBack(&battleField->protossFleet);
    }
    if(battleField->protossFleet.size == 0){
      return true;
    }
  }
  printTerranAtack(lastProtossID, lastOfProtoss);
  ProtosAfterTurn(lastOfProtoss);
  //regenarateShield(lastOfProtoss);
  return false;
}

bool processProtossTurn(BattleField *battleField) {
  int protossSize = battleField->protossFleet.size;
  TerranAirship* lastOfTerran = (TerranAirship*)vectorBack(&battleField->terranFleet);
  int lastTerranID;
  
  for (int i = 0; i < protossSize; i++)
  {
    lastTerranID = battleField->terranFleet.size-1;
    ProtossAirship* protossAirship = (ProtossAirship*)vectorGet(&battleField->protossFleet, i);
    ProtossAtack(lastOfTerran, protossAirship);
    if(lastOfTerran->health <= 0){
      
      // If Protoss killed Terran ship, prints out Protoss ship name and ID and last Terran ID
      printDeadTerran(protossAirship, i, lastTerranID);
      vectorPop(&battleField->terranFleet);
      lastTerranID = battleField->terranFleet.size-1;
    }
    lastOfTerran = (TerranAirship*)vectorBack(&battleField->terranFleet);

    if(battleField->terranFleet.size == 0){
      return true;
    }
    if(protossAirship->atacks > 0){
      ProtossAtack(lastOfTerran, protossAirship);
    }
    updateProtossAtacks(protossAirship);
  }
  printProtossAtack(lastTerranID,lastOfTerran);
  
  return false;
}

void printDeadTerran(ProtossAirship* protossAirship, int attackerID, int enemyID){
  printf("%s  with ID: %d killed enemy airship with ID: %d\n", protossAirship->name, attackerID, enemyID);
}

void printDeadProtoss(TerranAirship* terranAirship, int attackerID, int enemyID){
  printf("%s  with ID: %d killed enemy airship with ID: %d\n", terranAirship->name, attackerID, enemyID);
}

void printProtossAtack(int ID, TerranAirship* terranAirship){
printf("Last Terran AirShip with ID %d has %d health left\n",ID, terranAirship->health);
}
void printTerranAtack(int ID, ProtossAirship* protossAirship){
  printf("Last Protoss AirShip with ID %d has %d health and %d shield left\n",ID, protossAirship->health, protossAirship->shield);
}

void deinit(BattleField *battleField) {
  int terranSize = battleField->terranFleet.size;
  for(int i=0; i<terranSize;i++){
    free(vectorGet(&battleField->terranFleet, i));
  }
  int protossSize = battleField->protossFleet.size;
  for(int i=0; i<protossSize;i++){
    free(vectorGet(&battleField->protossFleet, i));
  }
  vectorFree(&battleField->terranFleet);
  vectorFree(&battleField->protossFleet);
}


