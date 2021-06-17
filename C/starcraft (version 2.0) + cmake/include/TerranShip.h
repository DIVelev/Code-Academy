#ifndef TerranShip_H_
#define TerranShip_H_

#include "Defines.h"
#include <stdlib.h>
#include "ProtossShip.h"

typedef struct protossShip protossShip;

typedef struct terranShip{
    int terranHP;
    int terranDMG;
    enum AirShipType shipType;
} terranShip;

terranShip* initViking(terranShip *airShip);
terranShip* initBattleCrusher(terranShip* airShip);
terranShip* vikingAttack(terranShip* tShip,protossShip* pShip);
terranShip* BattleCruserAttack(terranShip* tShip,int turnCount);

#endif /* TerranShip_H_ */
