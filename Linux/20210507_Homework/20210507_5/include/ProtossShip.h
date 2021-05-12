#ifndef ProtossShip_H_
#define ProtossShip_H_

#include "Defines.h"
#include <stdlib.h>
#include "TerranShip.h"

typedef struct terranShip terranShip;

typedef struct protossShip{
    int protossHP;
    int protossShield;
    int protossDMG;
    enum AirShipType shipType;
} protossShip;

protossShip *initPhoenix(protossShip *airShip);
protossShip *initCarrier(protossShip *airShip);
int carrierInteceptors(protossShip *airShip);
protossShip *damageTaken(protossShip *pShip,terranShip *tShip);
protossShip *regenerateShield(protossShip *pShip);

#endif /* ProtossShip_H_ */
