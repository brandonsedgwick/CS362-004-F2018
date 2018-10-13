#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Card Test for Adventurer*/

int main (int argc, char** argv) 
{

  struct gameState structGameState;
  int numPlayers=2;
  int seed = 10;
  int choice1 = 0, choice2 = 0, choice3 = 0;

  int kingodmCardArray[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
	       sea_hag, tribute, smithy};


  printf("Adventurer Card Test:\n\n");

  initializeGame(numPlayers, kingodmCardArray, seed, &structGameState);

  if(cardEffect(adventurer, choice1, choice2, choice3, &structGameState, 0, NULL) == 0)
    printf("Adventurer test passed\n");

  else
  	printf("Adventurer test failed\n");

}