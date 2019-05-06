#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1


//testing handCard
int main(){
  int handPos = 1;
  struct gameState G;
  G->numPlayers = 2;
  G->whoseTurn = 1;
  G->hand[1][1] = gold;
  printf ("Testing handCard .\n");
  printf("Testing that the card in that spot should be a gold.\n");
  assert(handCard(handPos, G) == gold );


return 0;
}
