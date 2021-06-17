#ifndef SPELLCASTING_H_
#define SPELLCASTING_H_

#include "Hero.h"

void archMageCastBasicSpell(Hero *heroes);
void archMageCastUltimateSpell(Hero *heroes);
void deathKnightCastBasicSpell(Hero *heroes);
void deathKnightCastUltimateSpell(Hero *heroes);
void drawRangerCastBasicSpell(Hero *heroes);
void drawRangerCastUltimateSpell(Hero *heroes);
void regenerateMana(Hero *heroes);
void castingProcess(int currAction,Hero *heroes);
bool successfulCasting(Hero *heroes,enum SpellType type);

#endif /* SPELLCASTING_H_ */
