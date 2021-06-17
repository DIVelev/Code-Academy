#include "../include/Ammo.h"

void reload(BattleField *bt,enum PlayerDefines player){
    int bullet = 1;
    for(int i = 0;i < bt->players[player].pistol.clipSize && bt->players[player].pistol.remainingAmmo > 0;i++){
        bt->players[player].pistol.currClipBullets += bullet;
        bt->players[player].pistol.remainingAmmo -= bullet;
    }
    if (!checkAmmo(bt,player)){
        printf("Reloading...\n");
        printf("currClipBullets: %d, remainingAmmo: %d\n",bt->players[player].pistol.currClipBullets,bt->players[player].pistol.remainingAmmo);
    }
}

bool checkCurrentAmmo(BattleField *bt,enum PlayerDefines player){
    if (bt->players[player].pistol.currClipBullets==0){
       return true;
    }
    return false;   
}

bool checkAmmo(BattleField *bt,enum PlayerDefines player){
    if(checkCurrentAmmo(bt,player) && bt->players[player].pistol.remainingAmmo<=0){
        printf("No ammo left\n");
        return true;
    }
    return false;
}
