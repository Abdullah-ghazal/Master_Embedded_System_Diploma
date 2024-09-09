#ifndef DC_H_
#define DC_H_
#include "state.h"

// define states of the DC motor
enum
{
	DC_idle,
	DC_busy
}DC_state_id;

// define of states functions
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init();

extern void (*DC_state)();

#endif /* DC_H_ */