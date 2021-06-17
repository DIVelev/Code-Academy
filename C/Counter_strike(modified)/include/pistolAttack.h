#ifndef PISTOLATTACK_H_
#define PISTOLATTACK_H_

#include "Ammo.h"
#include "takeDamage.h"

bool glockFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2);
bool desertEagleFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2);
void pistolFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2);

#endif /* PISTOLATTACK_H_ */
