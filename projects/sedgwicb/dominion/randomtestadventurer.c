#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dominion.h"
#include "rngs.h"



int main(){
    

    int num_tests = 100;
    int i, j;

    printf("Testing: Adventurer Card\n");
    for(j =0; j< num_tests; j++)
    {
        
        int seed = rand();

        int players = rand() % 4;
        int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
        
                     sea_hag, tribute, smithy};
        struct gameState structGameState;

        initializeGame(players, k, seed, &structGameState);
        // randomize each players deck and hand counts
        for(i=0; i<players; i++)
        {
            structGameState.deckCount[i] = rand() % MAX_DECK;
            structGameState.handCount[i] = rand() % MAX_HAND;
        }

        playCard(adventurer, 1, 1, 1, &structGameState);



    }
    printf("Adventurer card PASSED\n");
    return 0;
}