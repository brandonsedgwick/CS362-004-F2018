#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dominion.h"
#include "rngs.h"


int main(){
    
    int num_tests = 100;
    int i, j;

    printf("Testing: Smithy\n");
    for(j =0; j< num_tests; j++)
    {
        
        int seed = rand();
        

        int players = rand() % 4;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
                     sea_hag, tribute, smithy};
        struct gameState structGameState;

        initializeGame(players, k, seed, &structGameState);

        
        for(i=0; i<players; i++)
        {
            structGameState.deckCount[i] = rand() % MAX_DECK;
            structGameState.handCount[i] = rand() % MAX_HAND;
        }
         cardEffect(smithy, 1, 1, 1, &structGameState, 1, 0);

    }
      printf("Smithy card PASSED\n");
      return 0;
}