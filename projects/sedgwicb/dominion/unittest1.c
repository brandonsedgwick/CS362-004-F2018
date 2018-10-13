#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


/*

Unittest1 - Checks the "isGameOver" function.

isGameOver()
Description: Checks the number of provinces or if three supply piles are empty to determine if the game is over.
Input: struct gameState state - holdsd a pointer to a gameState variable
Return: Returns 1 if the game is over
        Returns 0 if the game is NOT over

*/





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
        structGameState.supplyCount[i] = 5;
   }

/**********************Test #1**************************************/

printf("Test #1: Fill supply piles and province cards with 5 total cards\n\n");
checkGameOver = isGameOver(&structGameState);
/*Set this value to 0 since the game should not be over. All supply piles have 5 cards*/
checkedAgainstValue=0;

if(checkedAgainstValue == checkGameOver)
{

printf("Test #1 PASSED: Return value = 0. isGameOver indicating game is NOT over\n\n");

}

else
{

printf("Test #1 FAILED: Return value = 1. isGameOver indicating game IS over\n\n");

}

/**********************Test #2**************************************/
printf("Test #2: Remove all province cards\n\n");
/*By setting the province cards to 0, the game should be over*/
structGameState.supplyCount[province]=0;

checkGameOver = isGameOver(&structGameState);
/*Set this value to 1 since the game should be over.*/
checkedAgainstValue=1;

if(checkedAgainstValue == checkGameOver)
{

printf("Test #2 PASSED: Return value = 1. isGameOver indicating game IS over\n\n");

}

else
{

printf("Test #2 FAILED: Return value = 0. isGameOver indicating game is NOT over\n\n");

}




return 0;
}