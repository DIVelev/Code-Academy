#include "../include/BattleField.h"

void createPlayers(BattleField *bf) {
  if (bf == NULL) {
    perror("Structure is empty!\n");
    exit(1);
  }

  int playerHealth = 0;
  int playerArmor = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d", &playerHealth, &playerArmor);
    bf->players[i].playerData.health=playerHealth;
    bf->players[i].playerData.armor=playerArmor;
    bf->players[i].playerId=i;
    bf->players[i].playerTurn = 0;
  }
}

void buyPistols(BattleField *bf) {
  if (bf == NULL) {
    perror("Structure is empty!\n");
    exit(2);
  }

  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,&pistolRemainingAmmo);
    bf->players[i].pistol.pistolType=pistolId;
    bf->players[i].pistol.damagePerRound=pistolDamagePerRound;
    bf->players[i].pistol.clipSize=pistolClipSize;
    bf->players[i].pistol.remainingAmmo=pistolRemainingAmmo;
    bf->players[i].pistol.currClipBullets=pistolClipSize;
  }
}

void startBattle(BattleField *bf) {
  if (bf == NULL) {
    perror("Structure is empty!\n");
    exit(3);
  }

  while (true){
    if (playerTurn(bf,PLAYER_ONE,PLAYER_TWO)){
      printf("\nPlayer with ID: 0 wins!\n");
      break;
    }

    if (playerTurn(bf,PLAYER_TWO,PLAYER_ONE)){
      printf("\nPlayer with ID: 1 wins!\n");
      break;
    }
  }
}
