
#ifndef PRESSURE_DRIVER_H_
#define PRESSURE_DRIVER_H_

#include "states.h"
#include "driver.h"

// states
enum
{
	pressure_sensore_driver_init,
	pressure_sensore_driver_read,
	pressure_sensore_driver_waiting
}pressure_sensore_driver_stateID;

// Function prototypes for each state of the pressure sensor driver
STATE_DEFINE(pressure_sensore_driver_init); 	// Initialize the pressure sensor
STATE_DEFINE(pressure_sensore_driver_read);		// Read data from the pressure sensor
STATE_DEFINE(pressure_sensore_driver_waiting);	// Wait for the next action


// External pointer to the current state function of the pressure sensor driver
extern void (*pf_Pressure_Sensor)();

#endif /* PRESSURE_DRIVER_H_ */