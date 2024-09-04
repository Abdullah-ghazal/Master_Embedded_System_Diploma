
#ifndef STATE_H_
#define STATE_H_
#include "Platform_Types.h" 
#include "driver.h"

#define LOW 0
#define HIGH 1

#define STATE_DEFINE(_stateFn_) void ST_##_stateFn_()
#define STATE(_stateFn_) ST_##_stateFn_




// connection between modules
void set_pressure_value(int pressure);

void detect_high_pressure();

void Start_Alarm();

void Stop_Alarm();



#endif /* STATE_H_ */