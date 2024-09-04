#ifndef _Alarm_Monitor_H
#define _Alarm_Monitor_H

#include "states.h"

// states
enum
{
    alarm_monitor_init,
    AM_monitor,
    AM_alarm_on
}alarm_monitor_stateID;

// Function prototypes for each state
STATE_DEFINE(alarm_monitor_init);
STATE_DEFINE(AM_monitor);
STATE_DEFINE(AM_alarm_on);

// External pointer to the current state function of the alarm monitor
extern void (*pf_alarm_monitor)();

#endif // _Alarm_Monitor_H