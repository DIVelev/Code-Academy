#include "SpellCasting.h"

bool successfulCasting(Hero *heroes,enum SpellType type){
 if (heroes->currMana-heroes->spells[type].manaCost>=0){
        printf("%s casted %s for %d mana\n",heroes->name,heroes->spells[type].name,heroes->spells[type].manaCost);
        heroes->currMana-=heroes->spells[type].manaCost;
        return true;
    }
    return false;
}

void notEnough(Hero *heroes,enum SpellType type){
    printf("%s - not enough mana to cast %s\n",heroes->name,heroes->spells[type].name);
}


void archMageCastBasicSpell(Hero *heroes){
    if (!successfulCasting(heroes,BASIC)){
        notEnough(heroes,BASIC);
    }
}

void archMageCastUltimateSpell(Hero *heroes){
   if (successfulCasting(heroes,ULTIMATE)){
        archMageRegenerateMana(heroes);
   }else{
        notEnough(heroes,ULTIMATE);
   }
   
}

void deathKnightCastBasicSpell(Hero *heroes){
    if (!successfulCasting(heroes,BASIC)){
        notEnough(heroes,BASIC);
    }
}

void deathKnightCastUltimateSpell(Hero *heroes){
    if (successfulCasting(heroes,ULTIMATE)){
        printf("%s casted %s for 0 mana\n",heroes->name,heroes->spells[BASIC].name);
    }else{
        notEnough(heroes,ULTIMATE);
    }
    
}

void drawRangerCastBasicSpell(Hero *heroes){
    if (successfulCasting(heroes,BASIC)){
        printf("%s casted %s for 0 mana\n",heroes->name,heroes->spells[BASIC].name);
    }else{
        notEnough(heroes,BASIC);
    }
}

void drawRangerCastUltimateSpell(Hero *heroes){
    if (!successfulCasting(heroes,ULTIMATE)){
        notEnough(heroes,ULTIMATE);
    }
}

void regenerateMana(Hero *heroes){
    if (heroes->currMana+heroes->manaRegenRate>heroes->maxMana){
        heroes->currMana=heroes->maxMana;
    }else{
        heroes->currMana=heroes->currMana+heroes->manaRegenRate;
    }
}

void castingProcess(int currAction,Hero *heroes){
    switch (currAction){
    case 0:
    archMageCastBasicSpell(heroes+ArchMageIndex);
    deathKnightCastBasicSpell(heroes+DeathKnightIndex);
    drawRangerCastBasicSpell(heroes+DrawRangerIndex);
        break;
    case 1:
    archMageCastUltimateSpell(heroes+ArchMageIndex);
    deathKnightCastUltimateSpell(heroes+DeathKnightIndex);
    drawRangerCastUltimateSpell(heroes+DrawRangerIndex);
        break;
    case 2:
    for(int i=0;i<MAX_HERO_NUMBER;i++){
        regenerateMana((heroes+i));
    }
        break;
    
    default:
        break;
    }
}
