#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_
#include "Defines.h"
#include <stdbool.h>

#include "Vector.h"
#include "Airships.h"

typedef struct {
  Vector terranFleet;
  Vector protossFleet;
} BattleField;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr);
void generateProtossFleet(BattleField *battleField, const char *protossFleetStr);

void startBattle(BattleField *battleField);

void deinit(BattleField *battleField);

bool processTerranTurn(BattleField *battleField, int turn);
bool processProtossTurn(BattleField *battleField);
void printProtossAtack(int ID, TerranAirship* terranAirship);
void printTerranAtack(int ID, ProtossAirship* protossAirship);
void printDeadTerran(ProtossAirship* protossAirship, int attackerID, int enemyID);
void printDeadProtoss(TerranAirship* terranAirship, int attackerID, int enemyID);

#endif /* BATTLEFIELD_H_ */
