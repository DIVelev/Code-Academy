#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include "Defines.h"
#include "TerranShip.h"
#include "ProtossShip.h"

typedef struct {
  Vector terranFleet;
  Vector protossFleet;
} BattleField;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr);
void generateProtossFleet(BattleField *battleField, const char *protossFleetStr);

void startBattle(BattleField *battleField);

void deinit(BattleField *battleField);

int terranTurnProcess(BattleField *battleField);
int protossTurnProcess(BattleField *battleField);
void terranShipDestroyed(protossShip *protossAirShip,int protossShipId,int terranShipId);
void protossShipDestroyed(terranShip *terranAirship,int terranShipId,int protossShipId);


#endif /* BATTLEFIELD_H_ */
