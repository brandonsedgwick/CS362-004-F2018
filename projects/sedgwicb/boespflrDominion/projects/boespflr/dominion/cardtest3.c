#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>



/* Card Test for Smithy*/




int main (int argc, char** argv) 
{

  struct gameState structGameState;
  int choice1 = 0, choice2 = 0, choice3 = 0;
  int tmp;
  int numPlayers=2;
  int seed = 10;
  int kingodmCardArray[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
	       sea_hag, tribute, smithy};

  printf("Smithy Card Test:\n\n");         
  initializeGame(numPlayers, kingodmCardArray, seed, &structGameState);

  tmp = numHandCards(&structGameState);
  cardEffect(smithy, choice1, choice2, choice3, &structGameState, 0,NULL);

  //make sure 3 cards were drawn

  if(numHandCards(&structGameState) == tmp + 2)
      printf("Smithy test passed\n");
  else
    printf("Smith test failed\n");
  return 0;

}