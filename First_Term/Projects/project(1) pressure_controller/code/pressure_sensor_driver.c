#include "pressure_sensor_driver.h"

// pointer to function
void (*pf_Pressure_Sensor)();

uint32 pressure_value; // container of the pressure value


STATE_DEFINE(pressure_sensore_driver_init)
{
    // state sansor
    pressure_sensore_driver_stateID = pressure_sensore_driver_init;

    //looping until read pressure signal
    pf_Pressure_Sensor = STATE(pressure_sensore_driver_read);
}

STATE_DEFINE(pressure_sensore_driver_read)
{
    // state sansor
    pressure_sensore_driver_stateID = pressure_sensore_driver_read;

    // get pressure from sensor
    pressure_value = getPressureVal();

    // send to main_algorithm
    set_pressure_value(pressure_value);

    pf_Pressure_Sensor = STATE(pressure_sensore_driver_waiting);

}


STATE_DEFINE(pressure_sensore_driver_waiting)
{
    // state sansor
    pressure_sensore_driver_stateID = pressure_sensore_driver_waiting;

    /******** when timer expires, it will detect pressure again **********/
    pf_Pressure_Sensor = STATE(pressure_sensore_driver_read);
}