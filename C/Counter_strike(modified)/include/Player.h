#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "Pistol.h"
#include "Defines.h"

typedef struct {
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
  int playerTurn;
} Player;

#endif /* PLAYER_H_ */
