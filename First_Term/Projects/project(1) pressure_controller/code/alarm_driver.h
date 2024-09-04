#ifndef _Alarm_Actuator_driver_H
#define _Alarm_Actuator_driver_H

#include "states.h"

// states
enum
{
    alarm_actuator_init,
    alarm_actuator_waiting,
    alarm_actuator_turn_on,
    alarm_actuator_turn_off
}alarm_actuator_stateID;

// Function prototypes for each state
STATE_DEFINE(alarm_actuator_init);
STATE_DEFINE(alarm_actuator_waiting);
STATE_DEFINE(alarm_actuator_turn_on);
STATE_DEFINE(alarm_actuator_turn_off);

// External pointer to the current state function of the alarm actuator
extern void (*pf_alarm_actuator)();


#endif // _Alarm_Actuator_driver_H