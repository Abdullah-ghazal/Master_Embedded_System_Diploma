#ifndef US_H_
#define US_H_

#include "state.h"

// state of the ultra sonic sensor
enum{
	US_busy
}US_state_id;

// Function prototypes for state function
STATE_define(US_busy);

void US_init();

// External declaration of the current state function pointer
extern void (*US_state)();

#endif /* US_H_ */