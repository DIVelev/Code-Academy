#include "BattleField.h"

int protossTurnProcess(BattleField *battleField){
    int lastTerranShip,protossFleetSize,currShip,numberOfInterceptors;
    lastTerranShip = vectorGetSize(&battleField->terranFleet);
    protossShip* protossAirShip;
    terranShip* terranAirShip = battleField->terranFleet.items[lastTerranShip-1];
    protossFleetSize = vectorGetSize(&battleField->protossFleet);
    for(currShip = 0;currShip < protossFleetSize; currShip++){
        protossAirShip = battleField->protossFleet.items[currShip];
        if(protossAirShip->shipType == CARRIER){
            numberOfInterceptors = carrierInteceptors(protossAirShip);
            for(int numberOfAttacks=0; numberOfAttacks<numberOfInterceptors; numberOfAttacks++){
                terranAirShip->terranHP = terranAirShip->terranHP - protossAirShip->protossDMG;
                if(terranAirShip->terranHP<=0){
                    terranShipDestroyed(protossAirShip,currShip,lastTerranShip-1);
                    vectorDelete(&battleField->terranFleet, lastTerranShip - 1);
                    if (vectorIsEmpty(&battleField->terranFleet)){
                        return 1;
                    }
                    lastTerranShip = vectorGetSize(&battleField->terranFleet);
                    terranAirShip = battleField->terranFleet.items[lastTerranShip - 1];
                }
            }
        }else{
            terranAirShip->terranHP = terranAirShip->terranHP - protossAirShip->protossDMG;
            if(terranAirShip->terranHP <= 0){
            terranShipDestroyed(protossAirShip,currShip,lastTerranShip-1);
            vectorDelete(&battleField->terranFleet, lastTerranShip - 1);
                if (vectorIsEmpty(&battleField->terranFleet)){
                    return 1;
                }
                lastTerranShip = vectorGetSize(&battleField->terranFleet);
                terranAirShip = battleField->terranFleet.items[lastTerranShip - 1];
            }
        }
    }
    printf("Last Terran AirShip with ID: %d has %d health left\n", lastTerranShip - 1, terranAirShip->terranHP);
    return 0;
}

void terranShipDestroyed(protossShip *protossAirShip,int protossShipId,int terranShipId){
    if(protossAirShip->shipType == PHOENIX){
        printf("Phoenix with ID: %d killed enemy airship with ID: %d\n",protossShipId,terranShipId);
    }else{
        printf("Carrier with ID: %d killed enemy airship with ID: %d\n",protossShipId,terranShipId);
    }
}
