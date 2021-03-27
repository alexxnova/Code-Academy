#ifndef Airships_H_
#define Airships_H_

#include "Defines.h"

typedef struct {
  enum AirShipType type;
  int health;
  int damage;
  int shield;
  int shieldRegenerateRate;
  int atacks;
  char * name;
} ProtossAirship;

typedef struct {
  enum AirShipType type;
  int health;
  int damage;
  char * name;
} TerranAirship;

#endif