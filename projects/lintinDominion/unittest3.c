#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1

//testing isGameOver

int main(){
  struct gameState G;
  G->supplyCount = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
  G->supplyCount[province] = 0;

  printf ("Testing isGameOver.\n");
  printf ("Testing with province empty.\n");
  assert(isGameOver(&G) == 1);
  G->supplyCount[province] = 10;
  printf ("Testing with game should not be over.\n");
  assert(isGameOver(&G) == 0);
  printf ("Testing 3 piles empty.\n");
  G->supplyCount = {10,10,10,10,0,10,10,10,10,10,10,0,10,10,10,10,10,10,10,10,10,0,10,10,10};
  assert(isGameOver(&G) == 1)
  return 0;
}
