// Standard headers
#include <stdio.h>
#include <stdlib.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(attacker_position);
  UNUSED(defender_spy);
  
  static int generate = 0;
  
  if (generate == 0){
    srand(getpid());
    generate++;
    }

  int dir = rand() % 5;
  
  if (dir == 0){
    return (direction_t) DIR_RIGHT;
  }
  else if (dir == 1){
    return (direction_t) DIR_UP_RIGHT;
  }
  else if (dir == 2){
    return (direction_t) DIR_DOWN_RIGHT;
  }
  else if (dir == 3){
    return (direction_t) DIR_UP;
  }
  else if (dir == 4){
    return (direction_t) DIR_DOWN;
  }
}

/*----------------------------------------------------------------------------*/
