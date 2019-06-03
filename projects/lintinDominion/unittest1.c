#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
//tests kingdomCards

int main(){

  int k[10] = {adventurer, council_room, feast, gardens, mine,
         remodel, smithy, village, baron, great_hall};

  printf ("Testing kingdomCards.\n");
  testK = kingdomCards(adventurer, council_room, feast, gardens, mine,
         remodel, smithy, village, baron, great_hall);
  assert(k == testK);

  return 0;
}
