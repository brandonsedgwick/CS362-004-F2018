#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/*

Unittest3 - Checks "whoseTurn" function.


*/
int main (int argc, char** argv)  
{
  struct gameState structGameState;

  int turn = 0;
  int check = 0;
  
printf("Test #1: Check whoseTurn\n\n ");

  for (int i = 0; i < 10; i++)
  {
    structGameState.whoseTurn = turn;
    check = whoseTurn(&structGameState);

    assert(check == turn);

    turn++;
  }
  

  printf("Test PASSED:\n");
  
  

  return 0;
}
