#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/*

Unittest4 - Checks "getCost" function.


*/


int main (int argc, char** argv)  
{

  assert(getCost(0) == 0);

  assert(getCost(baron) == 4);

  assert(getCost(adventurer) == 6);

  assert(getCost(village) == 3);

  assert(getCost(council_room) == 5);



printf("Test PASSED: getCost function\n\n");
  

  return 0;
}