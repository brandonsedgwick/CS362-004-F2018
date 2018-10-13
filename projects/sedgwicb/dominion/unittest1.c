/*

Unittest1 - Checks the "isGameOver" function.

isGameOver()
Description: Checks the number of provinces or if three supply piles are empty to determine if the game is over.
Input: struct gameState state - holdsd a pointer to a gameState variable
Return: Returns 1 if the game is over
        Returns 0 if the game is NOT over

*/

#include <stdio.h>
#include "rngs.h"
#include "dominion.h"
#include "dominion_helpers.h"



int main (int argc, char** argv) 
{
    struct gameState structGameState;
    int i;
    int numSupplyPiles = 25;
    int checkGameOver;
    int checkedAgainstValue;

  printf("This test checks the isGameOver function\n\n\n");

  /* initialize supply piles with one card */
   for (i = 0; i < numSupplyPiles; i++)
   {
        structGameState.supplyCount[i] = 1;
   }

printf("Test #1:\n\n");
checkGameOver = isGameOver(&structGameState);
/*Set this value to 0 since the game should not be over. All supply piles have 5 cards*/
checkedAgainstValue=0;

if(checkedAgainstValue == checkGameOver)
{

printf("Test #1 PASSED: Return value = 0. isGameOver indicating game is NOT over\n\n");

}

else
{

printf("Test #1 FAILED: Return value = 1. isGameOver indicating game is over\n\n");

}



return 0;
}