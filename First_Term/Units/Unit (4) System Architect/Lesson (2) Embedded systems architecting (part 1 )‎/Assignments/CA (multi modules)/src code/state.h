#ifndef STATES_H_
#define STATES_H_


#include"stdio.h"
#include"stdlib.h"

// define macro to declare the functions
#define STATE_define(_statFUN_) void ST_##_statFUN_()

// define macro to call functions easly
#define STATE(_statFUN_) ST_##_statFUN_

// to read the distance from us sensor
void getDistance(int d);

// to change the value of the motor speed
void setSpeed(int s);

#endif /* STATES_H_ */