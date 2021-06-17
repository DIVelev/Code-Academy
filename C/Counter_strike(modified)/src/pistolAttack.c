#include "../include/pistolAttack.h"

bool glockFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2){
    for (int i = 1; i <= ROUNDS_PER_FIRE; i++){
        pistolFire(bt,player2,player);
        if(checkHealth(bt,player2)){
            return true;
        }
        if (checkCurrentAmmo(bt,player)&&i==ROUNDS_PER_FIRE){
            bt->players[player].playerTurn=1;
            return false;
        }else if(checkCurrentAmmo(bt,player)&&i!=ROUNDS_PER_FIRE){
            reload(bt,player);
            return false;
        }
    }
    return false;
}

bool desertEagleFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2){
    pistolFire(bt, player2,player);
    if(checkHealth(bt,player2)){
        return true;
    }
    if(checkCurrentAmmo(bt,player)){
        bt->players[player].playerTurn=1;
    }
    return false;
}

void pistolFire(BattleField *bt,enum PlayerDefines player,enum PlayerDefines player2){
    int bullet = 1;
    armour(bt,player,player2);
    bt->players[player2].pistol.currClipBullets -= bullet;
    printer(bt,player);
}
