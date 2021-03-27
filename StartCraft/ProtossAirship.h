#include "Defines.h"
#include "Airships.h"
void initProtossAirship(ProtossAirship** protossAirship, char letter);
void initPhoenix(ProtossAirship* protossAirship);
void initCarrier(ProtossAirship* protossAirship);
void ProtossAtack(TerranAirship* terranAirship, ProtossAirship* protossAirship);
void regenarateShield(ProtossAirship* protossAirship);
void updateProtossAtacks(ProtossAirship* protossAirship);
void ProtosAfterTurn(ProtossAirship* protossAirship);
void updatePhoenixShield(ProtossAirship* protossAirship);
void updateCarrierShield(ProtossAirship* protossAirship);
