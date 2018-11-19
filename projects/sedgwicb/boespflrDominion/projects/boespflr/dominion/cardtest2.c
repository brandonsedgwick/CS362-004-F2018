#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Card Test for Steward*/

int main (int argc, char** argv) 

{

  struct gameState structGameState;
  int choice1 = 0, choice2 = 0, choice3 = 0;
  int tmp;
  int seed = 10;
  int numPlayers = 2;
  int kingodmCardArray[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
         sea_hag, tribute, smithy};


  
  printf("Steward Card Test:\n\n");         
  initializeGame(numPlayers, kingodmCardArray, seed, &structGameState);

  choice1 = 1;
  tmp = numHandCards(&structGameState);
  cardEffect(steward, choice1, choice2, choice3, &structGameState, 0, NULL);

if(numHandCards(&structGameState) == tmp + 1)
  printf("Steward test passed\n");
else
  printf("Steward test failed\n");
}