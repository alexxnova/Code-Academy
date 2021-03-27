#include "Defines.h"
#include "Airships.h"
#include <stdlib.h>
#include "TerranAirship.h"

// Check ship type and initialize 
void initTerranAirship(TerranAirship** terranAirship, char letter){
    (*terranAirship) = malloc(sizeof(TerranAirship));
    if(letter == 'v'){
        initViking(*terranAirship);
    }
    else if(letter == 'b'){
        initBattleCruser(*terranAirship);
    }
}

void initViking(TerranAirship* viking){
    viking->type = VIKING;
    viking->health = (int)VIKING_HEALTH;
    viking->damage = (int)VIKING_DAMAGE;
    viking->name = "Viking";
}

void initBattleCruser(TerranAirship* battleCruser){
    battleCruser->type = BATTLE_CRUSER;
    battleCruser->health = (int)BATTLE_CRUSER_HEALTH;
    battleCruser->damage = (int)BATTLE_BRUSER_DAMAGE;
    battleCruser->name = "Battle cruser";
}

void TerranAtack(ProtossAirship* protossAirship, TerranAirship* terranAirship, int turn){
    int damage = terranAirship->damage;
    if(protossAirship->type == PHOENIX && terranAirship->type == VIKING){
        damage = VIKING_DOUBLE_DAMAGE;
    }

    if(terranAirship->type == BATTLE_CRUSER && !(turn%=YAMATO_CANNON_LOADING_TURNS)){
        damage = BATTLE_BRUSER_POWER_DAMAGE;
    }

    produceDamage(protossAirship, damage);
}

void produceDamage(ProtossAirship* protossAirship, int damage){

    if(protossAirship->shield >= damage){
        protossAirship->shield -= damage;
    }
    else{
        int demageToHealth = damage - protossAirship->shield;
        protossAirship->shield = 0;
        protossAirship->health -= demageToHealth;
    }
}

