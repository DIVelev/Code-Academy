#include "../include/pistolAttack.h"

bool playerTurn(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2){

    printf("\nPlayerID %d turn:\n",player);
    if(checkAmmo(bt,player)){
        return false;
    }

    if (bt->players[player].playerTurn==1){   
        reload(bt,player);
        bt->players[player].playerTurn=0;
        return false;
    }
   
    if(bt->players[player].pistol.pistolType==GLOCK){
        if(glockFire(bt,player,player2)){
            return true;
        }
    }else{
        if(desertEagleFire(bt,player,player2)){
            return true;
        }
    }
    return false;
}
