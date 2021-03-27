#include <stdio.h>
#include <stdlib.h>
#include "BattleField.h"

int main() {
  const int buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
  printf("Еnter Terran Flеet\n");
  scanf("%s", terranFleet);
  fflush(stdin);
  printf("Еnter Protoss Flеet\n");
  scanf("%s", protossFleet);
 
  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  generateProtossFleet(&battleField, protossFleet);
  int i;

  startBattle(&battleField);
  deinit(&battleField);

  return EXIT_SUCCESS;
}
