#include "Defines.h"
#include "Airships.h"
#include <stdlib.h>
#include"ProtossAirship.h"

void initProtossAirship(ProtossAirship** protossAirship, char letter){
    (*protossAirship) = malloc(sizeof(ProtossAirship));
    if(letter == 'p'){
        initPhoenix(*protossAirship);
    }
    else if(letter == 'c'){
        initCarrier(*protossAirship);
    }
}

void initPhoenix(ProtossAirship* protossAirship){
    protossAirship->type = PHOENIX;
    protossAirship->health = (int)PHOENIX_HEALTH;
    protossAirship->shield = (int)PHOENIX_SHIELD;
    protossAirship->shieldRegenerateRate = (int)PHOENIX_SHIELD_REGENERATE_RATE;
    protossAirship->damage = (int)PHOENIX_DAMAGE;
    protossAirship->atacks = (int)PHOENIX_ATACKS;
    protossAirship->name = "Phoenix";
}

void initCarrier(ProtossAirship* protossAirship){
    protossAirship->type = CARRIER;
    protossAirship->health = (int)CARRIER_HEALTH;
    protossAirship->shield = (int)CARRIER_SHIELD;
    protossAirship->shieldRegenerateRate = (int)CARRIER_SHIELD_REGENERATE_RATE;
    protossAirship->damage = (int)CARRIER_DAMAGE;
    protossAirship->atacks = (int)MAX_INTERCEPTORS;
    protossAirship->name = "Carrier";
}

void ProtossAtack(TerranAirship* terranAirship, ProtossAirship* protossAirship){
    int i;
    int countIterations =  protossAirship->atacks;
    for (i = 0; i < countIterations; i++)
    {
        terranAirship->health -= protossAirship->damage;
        protossAirship->atacks--;
        if(terranAirship->health <= 0){
            break;
        }
    }  
}

//Only for Carrier- updateInterceptors?
void updateProtossAtacks(ProtossAirship* protossAirship){
    if(protossAirship->type == PHOENIX){
        protossAirship->atacks = PHOENIX_ATACKS;
    }
    else if(protossAirship->type == CARRIER){
        if(protossAirship->health == CARRIER_HEALTH){
            protossAirship->atacks = MAX_INTERCEPTORS;
        }
        else if(protossAirship->health < CARRIER_HEALTH){
            protossAirship->atacks = DAMAGED_STATUS_INTERCEPTORS;
        }
    }
}

// One function updateShield for both Protos ships
void regenarateShield(ProtossAirship* protossAirship){
    if(protossAirship->type == PHOENIX){
        if(protossAirship->shield + PHOENIX_SHIELD_REGENERATE_RATE >= PHOENIX_SHIELD){
            protossAirship->shield = PHOENIX_SHIELD;
        }
        else{
            protossAirship->shield += PHOENIX_SHIELD_REGENERATE_RATE;
        }
    }
    else if(protossAirship->type == CARRIER){
            if(protossAirship->shield + CARRIER_SHIELD_REGENERATE_RATE >= CARRIER_SHIELD){
                protossAirship->shield = CARRIER_SHIELD;
            }
            else{
                protossAirship->shield += CARRIER_SHIELD_REGENERATE_RATE;
            }
    }
}

void ProtosAfterTurn(ProtossAirship* protossAirship){
    if(protossAirship->type == PHOENIX){
        updatePhoenixShield(protossAirship);
    }
    else if(protossAirship->type == CARRIER){
        updateCarrierShield(protossAirship);
    }
    updateProtossAtacks(protossAirship);
}

void updatePhoenixShield(ProtossAirship* protossAirship){
    if(protossAirship->shield + PHOENIX_SHIELD_REGENERATE_RATE >= PHOENIX_SHIELD){
        protossAirship->shield = PHOENIX_SHIELD;
    }
    else{
        protossAirship->shield += PHOENIX_SHIELD_REGENERATE_RATE;
    }
}

void updateCarrierShield(ProtossAirship* protossAirship){
    if(protossAirship->shield + CARRIER_SHIELD_REGENERATE_RATE >= CARRIER_SHIELD){
        protossAirship->shield = CARRIER_SHIELD;
    }
    else{
        protossAirship->shield += CARRIER_SHIELD_REGENERATE_RATE;
    }
}

