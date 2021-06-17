#include "SpellCasting.h"

int main() {
  char name[MAX_HERO_NAME_SIZE + 1];
  int maxMana = 0;
  int baseManaRegenRate = 0;
  int manaRegenModifier = 0;
  int i;

  Hero *heroes = (Hero*)malloc(MAX_HERO_NUMBER*sizeof(Hero));

  for(i=0;i<MAX_HERO_NUMBER;i++){
    switch(i){
      case ArchMageIndex:
      //read Archmage data
        scanf("%s %d %d %d", name, &maxMana, &baseManaRegenRate, &manaRegenModifier);
        heroBaseInit((heroes+ArchMageIndex),name,maxMana,baseManaRegenRate*manaRegenModifier);
        heroSpellsInit((heroes+ArchMageIndex),ARCHMAGE_BASIC_SPELL_NAME,ARCHMAGE_BASIC_SPELL_MANA_COST,ARCHMAGE_ULTIMATE_SPELL_NAME,ARCHMAGE_ULTIMATE_SPELL_MANA_COST);
      break;
    
      case DeathKnightIndex:
      //read Death Knight data
        scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
        heroBaseInit((heroes+DeathKnightIndex),name,maxMana,baseManaRegenRate);
        heroSpellsInit((heroes+DeathKnightIndex),DEATH_KNIGHT_BASIC_SPELL_NAME,DEATH_KNIGHT_BASIC_SPELL_MANA_COST,DEATH_KNIGHT_ULTIMATE_SPELL_NAME,DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);
      break;

      case DrawRangerIndex:
      //read Draw Ranger data
        scanf("%s %d %d", name, &maxMana, &baseManaRegenRate);
        heroBaseInit((heroes+DrawRangerIndex),name,maxMana,baseManaRegenRate);
        heroSpellsInit((heroes+DrawRangerIndex),DRAW_RANGER_BASIC_SPELL_NAME,DRAW_RANGER_BASIC_SPELL_MANA_COST,DRAW_RANGER_ULTIMATE_SPELL_NAME,DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);
      break;
    }
  }

  int commandsCount = 0;
  int currAction = 0;
  scanf("%d", &commandsCount);

  for (i = 0; i < commandsCount; ++i) {
    scanf("%d", &currAction);
    castingProcess(currAction, heroes);
  }

  free(heroes);
  return EXIT_SUCCESS;
}
