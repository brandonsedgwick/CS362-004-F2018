#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dominion.h"
#include "rngs.h"



int main(){
    

    int num_tests = 100;
    int i, j;
    int goodTest=0;
    int badTest=0;

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

        int result = playCard(adventurer, 1, 1, 1, &structGameState);

        if (result == 0)
        {
            goodTest++;
        }

        else
        {
            badTest++;
        }

    }
     printf("# of passed tests:%d\n", goodTest);
    return 0;
}