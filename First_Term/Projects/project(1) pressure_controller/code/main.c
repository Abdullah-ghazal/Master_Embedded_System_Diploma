 /***********************************************
 * @author         : Abdullah ghazal            *
 * @Data           : 3/9/2024                   *
 * ARM Cortex M3   : Stm32f103C6                *
 ************************************************/

#include <stdio.h>
#include "pressure_sensor_driver.h"
#include "main_algo.h"
#include "Alarm_Monitor.h"
#include "alarm_driver.h"
#include "driver.h" 


void setup(void)
{
    pf_Pressure_Sensor  = STATE(pressure_sensore_driver_init);
    pf_main_algorithm   = STATE(main_algo_init);
    pf_alarm_monitor    = STATE(alarm_monitor_init);
    pf_alarm_actuator   = STATE(alarm_actuator_init);
}


int main ()
{

	GPIO_INITIALIZATION();
    setup();

	while (1)
	{
        pf_Pressure_Sensor();
        pf_main_algorithm();
        pf_alarm_monitor();
        pf_alarm_actuator();
	}
}

