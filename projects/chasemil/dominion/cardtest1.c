#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1
//tests  remodel

//check deckcount stays teh same

int main(){
  int card = remodel;
  int choice1 = 1;
  int choice2 = 2;
  int choice3 = 0;
  struct gameState G;
  int handPos = 5;
  int* bonus = 0;
  int currentPlayer = 1;

  printf("Testing remodel card.\n");
  G->hand[1] = {copper, silver, remodel, smithy, remodel};
  G->deckCount[1] = 0;
}
