#include "alarm_driver.h"

// pointer to function
void (*pf_alarm_actuator)();


STATE_DEFINE(alarm_actuator_init)
{
    // state actuator
    alarm_actuator_stateID = alarm_actuator_init;

    //when initialize turn off alarm
    Set_Alarm_actuator(HIGH);

    pf_alarm_actuator = STATE(alarm_actuator_waiting);
}

STATE_DEFINE(alarm_actuator_waiting)
{
    // state actuator
    alarm_actuator_stateID = alarm_actuator_waiting;

    pf_alarm_actuator = STATE(alarm_actuator_waiting);
}

STATE_DEFINE(alarm_actuator_turn_on)
{
    // state actuator
    alarm_actuator_stateID = alarm_actuator_turn_on;

    pf_alarm_actuator = STATE(alarm_actuator_turn_on);
}

STATE_DEFINE(alarm_actuator_turn_off)
{
    // state actuator
    alarm_actuator_stateID = alarm_actuator_turn_off;
    
    pf_alarm_actuator = STATE(alarm_actuator_waiting);
}

void Start_Alarm()
{
    Set_Alarm_actuator(LOW);
    pf_alarm_actuator = STATE(alarm_actuator_turn_on);
}

void Stop_Alarm()
{
    Set_Alarm_actuator(HIGH);
    pf_alarm_actuator = STATE(alarm_actuator_turn_off);
}