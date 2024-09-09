#include"CA.h"
int CA_distance=0;
int CA_threshold=50;
int CA_speed=0;
char* state[40];

void (*CA_state) ();

void getDistance(int d){

	CA_distance=d;
    if(CA_distance <= CA_threshold)
        CA_state = STATE(CA_waiting);
    else
        CA_state = STATE(CA_driving);

	printf("from US: distance = %d\n",d);
}

STATE_define(CA_waiting)
{

	CA_state_id = CA_waiting;
	CA_speed = 0;
	setSpeed(CA_speed);
    printf("<<< the car has Stopped!!! >>>\n");

}
STATE_define(CA_driving)
{
	CA_state_id = CA_driving;
	CA_speed=30;
	setSpeed(CA_speed);
    printf("<<< the car is running >>>\n");
}