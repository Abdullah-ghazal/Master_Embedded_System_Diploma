#include "alarm_monitor.h"

// pointer to function
void (*pf_alarm_monitor)();


STATE_DEFINE(alarm_monitor_init)
{
    // state monitor
    alarm_monitor_stateID = alarm_monitor_init;

    pf_alarm_monitor = STATE(AM_monitor);
}

STATE_DEFINE(AM_monitor)
{
    // state monitor
    alarm_monitor_stateID = alarm_monitor_init;

    // looping until detect high pressure
    pf_alarm_monitor = STATE(AM_monitor);
}

STATE_DEFINE(AM_alarm_on)
{
    // state monitor
    alarm_monitor_stateID = alarm_monitor_init;

    // alarm turn on for specific delay(Timer)
    Start_Alarm();
    Delay(1250000);
    Stop_Alarm();

    pf_alarm_monitor = STATE(AM_monitor);
}

void detect_high_pressure()
{
    // get high pressure so must turn alarm
    pf_alarm_monitor = STATE(AM_alarm_on);
}