#include "TerranShip.h"

terranShip* initViking(terranShip *airShip){
    airShip->terranHP=VIKING_HEALTH;
    airShip->terranDMG=VIKING_DAMAGE;
    airShip->shipType=VIKING;
    return airShip;
}

terranShip* initBattleCrusher(terranShip* airShip){
    airShip->terranHP=BATTLE_CRUSER_HEALTH;
    airShip->terranDMG=BATTLE_CRUSER_DAMAGE;
    airShip->shipType=BATTLE_CRUSER;
    return airShip;
}


terranShip* vikingAttack(terranShip* tShip,protossShip* pShip){
    if(pShip->shipType==PHOENIX){
        tShip->terranDMG=VIKING_DMG_AGAINST_PHOENIX;
    }else{
        tShip->terranDMG=VIKING_DAMAGE;
    }
    return tShip;
}

terranShip* BattleCruserAttack(terranShip* tShip,int turnCount){
    if(turnCount==YAMATO_CANNON_LOADING_TURNS){
        tShip->terranDMG=YAMATO_CANNON_DMG;
    }else{
        tShip->terranDMG=BATTLE_CRUSER_DAMAGE;
    }
    return tShip;
}
