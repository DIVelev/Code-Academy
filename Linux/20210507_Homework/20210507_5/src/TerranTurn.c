#include "BattleField.h"

int terranTurnProcess(BattleField *battleField){
    static int turnCounter = 0;
    int lastShip,terranFleetSize,currShip;
    lastShip = vectorGetSize(&battleField->protossFleet);
    protossShip* protossAirShip = battleField->protossFleet.items[lastShip-1];
    terranShip* terranAirShip;
    terranFleetSize = vectorGetSize(&battleField->terranFleet);
    for(currShip = 0;currShip<terranFleetSize;currShip++){
        terranAirShip = battleField->terranFleet.items[currShip];
        if(terranAirShip->shipType == VIKING){
            terranAirShip = vikingAttack(terranAirShip,protossAirShip);
        }else{
            terranAirShip = BattleCruserAttack(terranAirShip,turnCounter);
        }
        protossAirShip = damageTaken(protossAirShip,terranAirShip);
        if (protossAirShip->protossHP <= 0){
            protossShipDestroyed(terranAirShip,currShip,lastShip-1);
            vectorDelete(&battleField->protossFleet, lastShip - 1);
            if (vectorIsEmpty(&battleField->protossFleet)){
                return 1;
            }
            lastShip = vectorGetSize(&battleField->protossFleet);
            protossAirShip = battleField->protossFleet.items[lastShip - 1];
        }
    }
    printf("Last Protoss AirShip with ID: %d has %d health and %d shield left\n", lastShip - 1, protossAirShip->protossHP, protossAirShip->protossShield);
    protossAirShip = regenerateShield(protossAirShip);
    turnCounter++;
    if(turnCounter > YAMATO_CANNON_LOADING_TURNS){
        turnCounter = 0;
    }
    return 0;
}

void protossShipDestroyed(terranShip *terranAirship,int terranShipId,int protossShipId){
    if(terranAirship->shipType == VIKING){
        printf("Viking with ID: %d killed enemy airship with ID: %d\n",terranShipId,protossShipId);
    }else{
        printf("BattleCruiser with ID: %d killed enemy airship with ID: %d\n",terranShipId,protossShipId);
    }
}
