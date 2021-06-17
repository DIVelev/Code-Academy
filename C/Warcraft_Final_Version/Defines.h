#ifndef DEFINES_H_
#define DEFINES_H_

enum ActionType {
  CAST_BASIC_SPELL, CAST_ULTIMATE_SPELL, REGENERATE_MANA
};

enum SpellType {
  BASIC = 0, ULTIMATE = 1
};

#define ARCHMAGE_BASIC_SPELL_NAME "Water Elemental"
#define ARCHMAGE_BASIC_SPELL_MANA_COST 120
#define ARCHMAGE_ULTIMATE_SPELL_NAME "Mass Teleport"
#define ARCHMAGE_ULTIMATE_SPELL_MANA_COST 180

#define DEATH_KNIGHT_BASIC_SPELL_NAME "Death Coil"
#define DEATH_KNIGHT_BASIC_SPELL_MANA_COST 75
#define DEATH_KNIGHT_ULTIMATE_SPELL_NAME "Animate Dead"
#define DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST 200

#define DRAW_RANGER_BASIC_SPELL_NAME "Silence"
#define DRAW_RANGER_BASIC_SPELL_MANA_COST 90
#define DRAW_RANGER_ULTIMATE_SPELL_NAME "Charm"
#define DRAW_RANGER_ULTIMATE_SPELL_MANA_COST 150

#define MAX_HERO_NUMBER 3
#define ArchMageIndex 0
#define DeathKnightIndex 1
#define DrawRangerIndex 2

#endif /* DEFINES_H_ */
