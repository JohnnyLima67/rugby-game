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
  UNUSED(defender_position);
  UNUSED(attacker_spy);

  static position_t last_position;

  static bool current_dir = true;
  
  if (equal_positions(defender_position, last_position)){
    current_dir = !current_dir;
  }
  else {
    last_position = defender_position;
  }

  if (current_dir){
    return (direction_t) DIR_UP;
  }
  else {
    return (direction_t) DIR_DOWN;
  }
}

/*----------------------------------------------------------------------------*/
