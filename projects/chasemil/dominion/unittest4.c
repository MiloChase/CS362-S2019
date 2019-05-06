#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1


//testing updateCoins

int main(){
    int player = 1;
    int bonus = 0;
    struct gameState G;
    G->hand[1][0] = gold;
    G->handCount = 1;
    printf("Testing updateCoins.\n");
    updateCoins(1,&G,0);
    printf("Testing with 1 gold.\n");
    assert(G->coins == 3);
    printf("Testing with 1 gold and 1 silver.\n");
    G->hand[1][0] = gold;
    G->hand[1][1] = silver;
    G->handCount = 2;
    updateCoins(1,&G,0);
    assert(G->coins == 5);
    printf("Testing with 1 gold and 1 silver and +3 bonus.\n");
    updateCoins(1,&G,3);
    assert(G->coins == 8);
    return 0;    
}
