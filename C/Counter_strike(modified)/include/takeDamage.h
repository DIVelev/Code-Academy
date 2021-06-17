#ifndef TAKEDAMAGE_H_
#define TAKEDAMAGE_H_

#include "BattleField.h"

void armour(BattleField *bt,enum PlayerDefines player, enum PlayerDefines player2);
void damageTaken(BattleField *bt,enum PlayerDefines player, enum PlayerDefines player2,int dmgToHP,int dmgToArmor);
bool checkHealth(BattleField *bt,enum PlayerDefines player);
void printer(BattleField *bt,enum PlayerDefines player);

#endif /* TAKEDAMAGE_H_ */
