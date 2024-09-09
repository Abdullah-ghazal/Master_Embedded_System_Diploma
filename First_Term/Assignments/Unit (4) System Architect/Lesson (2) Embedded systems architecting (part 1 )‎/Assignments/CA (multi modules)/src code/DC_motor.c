#include "DC_motor.h"
// initial value of the motor speed
int DC_speed=0;

void (*DC_state)();


void DC_init()
{
	printf("DC_init \n");
}


void setSpeed(int s)
{
	DC_speed=s;
	DC_state=STATE(DC_busy);
	printf("speed = %d\n",s);
}



STATE_define(DC_idle)
{

	DC_state_id=DC_idle;


}

STATE_define(DC_busy)
{

	DC_state_id=DC_busy;
	DC_state=STATE(DC_idle);


}