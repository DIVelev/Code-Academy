#include "../include/BattleField.h"

int main() {
  BattleField battleField;

  createPlayers(&battleField);
  buyPistols(&battleField);
  startBattle(&battleField);
  
  return EXIT_SUCCESS;
}
