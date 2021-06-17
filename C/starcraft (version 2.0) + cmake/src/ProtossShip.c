#include "ProtossShip.h"
#include "TerranShip.h"

protossShip *initPhoenix(protossShip *airShip){
    airShip->protossHP = PHOENIX_HEALTH;
    airShip->protossShield = PHOENIX_SHIELD;
    airShip->protossDMG = PHOENIX_DAMAGE;
    airShip->shipType = PHOENIX;
    return airShip;
}

protossShip *initCarrier(protossShip *airShip){
    airShip->protossHP = CARRIER_HEALTH;
    airShip->protossShield = CARRIER_SHIELD;
    airShip->protossDMG = CARRIER_DAMAGE;
    airShip->shipType = CARRIER;
    return airShip;
}

int carrierInteceptors(protossShip *airShip){
    if (airShip->protossHP < CARRIER_HEALTH){
        return DAMAGED_STATUS_INTERCEPTORS;
    }else{
        return MAX_INTERCEPTORS;
    }
}

protossShip *damageTaken(protossShip *pShip,terranShip *tShip){
    static int damageToHP;
    if(pShip->protossShield <= tShip->terranDMG){
        damageToHP = tShip->terranDMG - pShip->protossShield;
        pShip->protossShield = 0;
        pShip->protossHP -= damageToHP;
        damageToHP = 0;
    }else{
        pShip->protossShield -= tShip->terranDMG;
    }
    return pShip;
}

protossShip *regenerateShield(protossShip *pShip){
    if(pShip->shipType == PHOENIX){
        pShip->protossShield = pShip->protossShield + PHOENIX_SHIELD_REGENERATE_RATE;
        if(pShip->protossShield >= PHOENIX_SHIELD){
            pShip->protossShield = PHOENIX_SHIELD;
        }
    }else{
        pShip->protossShield += CARRIER_SHIELD_REGENERATE_RATE;
        if(pShip->protossShield >= CARRIER_SHIELD){
            pShip->protossShield = CARRIER_SHIELD;
        }
    }
    return pShip;
}
