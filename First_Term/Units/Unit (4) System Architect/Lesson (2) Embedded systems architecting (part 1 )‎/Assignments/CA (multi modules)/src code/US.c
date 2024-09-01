#include"US.h"

// define the initial distance value
int US_distance=0;

/// @brief generate a random number between 45 : 55
/// @return int rand num
int setDistance()
{
	int x = 45+(rand()%11);
	return x;
}

/// @brief initialize the ultra sensor
void US_init()
{
	printf("US_init \n");
}

/// @brief declaration of the current state function pointer
void (*US_state)();

/// @brief define the us_busy func
/// @param take an enam element (const)

STATE_define(US_busy)
{

	US_state_id = US_busy;              // define the state
	US_distance = setDistance();        // set a new rand ditance
	getDistance(US_distance);           // getting the distance to processing it

	US_state=STATE(US_busy);

}