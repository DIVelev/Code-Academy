#include "../include/takeDamage.h"

void armour(BattleField *bt,enum PlayerDefines player, enum PlayerDefines player2){
    const int glockCoef = 2;
    const int deagleCoef = 3;
    const int pistolCoef = 4;
    int coef=(bt->players[player2].pistol.damagePerRound)/pistolCoef;
    int dmgToHp,dmgToArmor;
    if (bt->players[player2].pistol.pistolType==GLOCK){
        dmgToHp=coef*glockCoef;
        dmgToArmor=coef*glockCoef;
    }else{
        dmgToHp=coef*deagleCoef;
        dmgToArmor=coef;
    }
    damageTaken(bt,player,player2,dmgToHp,dmgToArmor);
}

void damageTaken(BattleField *bt,enum PlayerDefines player, enum PlayerDefines player2,int dmgToHP,int dmgToArmor){
    if(bt->players[player].playerData.armor > 0){
        if(bt->players[player].playerData.armor - dmgToArmor >= 0){
            bt->players[player].playerData.armor = bt->players[player].playerData.armor - dmgToArmor;
            bt->players[player].playerData.health = bt->players[player].playerData.health - dmgToHP;
        }else{
            bt->players[player].playerData.health = bt->players[player].playerData.health - bt->players[player2].pistol.damagePerRound + bt->players[player].playerData.armor;
            bt->players[player].playerData.armor = 0;
        }
    }else{
        bt->players[player].playerData.health = bt->players[player].playerData.health - bt->players[player2].pistol.damagePerRound;
    }
}

bool checkHealth(BattleField *bt,enum PlayerDefines player){
    if (bt->players[player].playerData.health<=0){   
        return true;
    }
    return false;
}

void printer(BattleField *bt,enum PlayerDefines player){
    printf("Enemy left with: %d health and %d armor\n",bt->players[player].playerData.health,bt->players[player].playerData.armor);
}
