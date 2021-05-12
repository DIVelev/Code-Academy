#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"

int main(){
    const int buffSize = 50;
    char terranFleet[buffSize];
    char protossFleet[buffSize];
    if(scanf("%s %s", terranFleet, protossFleet) != 2){
        perror("Error:");
        return 1;
    }

    BattleField battleField;
    generateTerranFleet(&battleField, terranFleet);
    generateProtossFleet(&battleField, protossFleet);
    startBattle(&battleField);
    deinit(&battleField);

    return EXIT_SUCCESS;
}
