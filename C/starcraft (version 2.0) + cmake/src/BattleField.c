#include "BattleField.h"

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr){
  int i, len;
  len = strlen(terranFleetStr);
  vectorInit(&battleField->terranFleet, len);
  for (i = 0; i < len; i++){
    terranShip *airShip = (terranShip *)malloc(sizeof(terranShip));
    if (terranFleetStr[i] == 'v'){
      airShip=initViking(airShip);
      vectorPush(&battleField->terranFleet, airShip);
    }else if (terranFleetStr[i] == 'b'){
      airShip=initBattleCrusher(airShip);
      vectorPush(&battleField->terranFleet, airShip);
    }else{
      printf("Invalid ship! The entered ship will not count!\n");
      free(airShip);
    }
  }
  if (vectorIsEmpty(&battleField->terranFleet)){
    printf("Error generating terrain fleet!\n");
    exit(1);
  }
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr){
  int i, len;
  len = strlen(protossFleetStr);
  vectorInit(&battleField->protossFleet, 1);
  for (i = 0; i < len; i++){
    protossShip *airShip = (protossShip*)malloc(sizeof(protossShip));
    if (protossFleetStr[i] == 'p'){
      airShip=initPhoenix(airShip);
      vectorPush(&battleField->protossFleet, airShip);
    }else if (protossFleetStr[i] == 'c'){
      airShip=initCarrier(airShip);
      vectorPush(&battleField->protossFleet, airShip);
    }else{
      printf("Invalid ship! The entered ship will not count!\n");
      free(airShip);
    }
  }
  if (vectorIsEmpty(&battleField->protossFleet)){
    printf("Error generating protoss fleet!\n");
    exit(2);
  }
}

void startBattle(BattleField *battleField){
  while (true){
    if (terranTurnProcess(battleField) == 1){
      printf("TERRAN has won!\n");
      break;
    }

    if (protossTurnProcess(battleField) == 1){
      printf("PROTOSS has won!\n");
      break;
    }
  }
}

void deinit(BattleField *battleField){
  vectorFree(&battleField->protossFleet);
  vectorFree(&battleField->terranFleet);
}
