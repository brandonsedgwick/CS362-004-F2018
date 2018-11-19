#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/*

Unittest2 - Checks the "updateCoins" function.
*/

int main (int argc, char** argv) {
    struct gameState structGameState;

    int checkedValue;
    int checkedAgainst;
    
    /*Setup variables for initial game*/

    int numPlayers = 2;
    int seed = 10;
    int kingdomCardArray[] = {adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};
    int bonus = 0;


    /* initialize 2 player game with seed 10 */
    initializeGame(numPlayers, kingdomCardArray, seed, &structGameState);

    /**********************Test #1**************************************/
    printf("Test #1: Check initial coin count\n\n ");
    checkedAgainst = 4;
    updateCoins(0, &structGameState, bonus);
    checkedValue = structGameState.coins;
    
    if(checkedValue == checkedAgainst)
    {
        printf("Test #1 Passed\n\n");        
    }

    else
    {
        printf("Test #1 FAILED\n\n");
    }

   
    /**********************Test #2**************************************/
        /* Player 0 should have 4 initial + 1 copper + 1 silver + 1 gold + 5 bonus = 12 total*/
    structGameState.hand[0][0] = copper;
    structGameState.hand[0][1] = silver;
    structGameState.hand[0][2] = gold;
    bonus = 5;

    printf("Test #2: Check updated coin count\n\n ");
    checkedAgainst = 12;
    updateCoins(0, &structGameState, bonus);
    checkedValue = structGameState.coins;


    if(checkedValue == checkedAgainst)
    {
        printf("Test #2 Passed\n\n");        
    }

    else
    {
        printf("Test #2 FAILED\n\n");
    }



/*printf("g.coins is %d\n\n", structGameState.coins);*/


    return 0;
}