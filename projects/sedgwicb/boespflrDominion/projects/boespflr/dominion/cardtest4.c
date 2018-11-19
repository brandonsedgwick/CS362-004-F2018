#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Card Test for Village*/

int main (int argc, char** argv) 
{

  struct gameState structGameState;
  int choice1 = 0, choice2 = 0, choice3 = 0;
  int tmp;
  int actions;
  int numPlayers=2;
  int seed = 10;
  int kingodmCardArray[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
         sea_hag, tribute, smithy};

  printf("Village Card Test:\n\n");
  initializeGame(numPlayers, kingodmCardArray, seed, &structGameState);

  actions = structGameState.numActions;

  tmp = cardEffect(village, choice1, choice2, choice3, &structGameState, 0, NULL);




  if(structGameState.numActions == actions + 2 && tmp ==0)
  printf("Village test passed\n");
  else
    printf("Village test failed\n");
  return 0;

}