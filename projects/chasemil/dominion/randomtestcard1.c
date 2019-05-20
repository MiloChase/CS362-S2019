#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1


int testAdventurer(int p, struct gameState* post){


  post.hand[p][1]= adventurer;
  int* bonus;
  int choice1, choice2, choice3, drawntreasure;
  drawntreasure = 0;
  updateCoins(p, post, 0);
  struct gameState pre;
  memcpy (&pre, post, sizeof(struct gameState));


  cardEffect(adventurer, choice1, choice2, choice3, post, 1, bonus, p, &drawntreasure );
  updateCoins(p,post,0);
  assert(memcmp(&pre, post, sizeof(struct gameState)) != 0);

  assert(post->coins > pre->coins);
  assert(post->actions > pre->actions);
  assert(post.hand[p][1] != adventurer);
return 0;
}


int main(){

  int i, n, r, p, deckCount, discardCount, handCount;

  int k[10] = {adventurer, council_room, feast, gardens, mine,
         remodel, smithy, village, baron, great_hall};


  struct gameState G;


  SelectStream(2);
  PutSeed(3);

  for (n = 0; n < 2000; n++) {
    for (i = 0; i < sizeof(struct gameState); i++) {
      ((char*)&G)[i] = floor(Random() * 256);
    }
    p = floor(Random() * 2);
    G.deckCount[p] = floor(Random() * MAX_DECK);
    G.discardCount[p] = floor(Random() * MAX_DECK);
    G.handCount[p] = floor(Random() * MAX_HAND);
    checkDrawCard(p, &G);
  }

return 0;
}
