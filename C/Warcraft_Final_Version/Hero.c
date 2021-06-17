#include "Hero.h"

void heroBaseInit(Hero *hero, const char *inputName, int inputMaxMana,int inputManaRegenRate){
    strcpy(hero->name,inputName);
    hero->maxMana = inputMaxMana;
    hero->currMana = inputMaxMana;
    hero->manaRegenRate = inputManaRegenRate;
}

void heroSpellsInit(Hero *hero, const char *basicSpellName,int basicSpellManaCost, const char *ultimateSpellName,int ultimateSpellManaCost){
    int i;
    for(i=0;i<MAX_SPELLS;i++){
        if (i == BASIC){
            strcpy(hero->spells[i].name,basicSpellName);
            hero->spells[i].manaCost = basicSpellManaCost;
        }else{
            strcpy(hero->spells[i].name,ultimateSpellName);
            hero->spells[i].manaCost = ultimateSpellManaCost;
        }
    }
}
