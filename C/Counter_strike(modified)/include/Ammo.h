#ifndef AMMO_H_
#define AMMO_H_

#include "BattleField.h"

void reload(BattleField *bt,enum PlayerDefines player);
bool checkCurrentAmmo(BattleField *bt,enum PlayerDefines player);
bool checkAmmo(BattleField *bt,enum PlayerDefines player);

#endif /* AMMO_H_ */
