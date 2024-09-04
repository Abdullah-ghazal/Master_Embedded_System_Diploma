#include "main_algo.h"

// pointer to function
void (*pf_main_algorithm)();

int pressure_detect = 0;
int threshold = 20;

STATE_DEFINE(main_algo_init)
{
    // algorithm state
    main_algo_stateID = main_algo_init;

    pf_main_algorithm = STATE(main_algo_waiting);
}

STATE_DEFINE(main_algo_waiting)
{
    // algorithm state
    main_algo_stateID = main_algo_init;

    // looping until get value from sensor
    pf_main_algorithm = STATE(main_algo_waiting);
}

STATE_DEFINE(main_algo_detect)
{
    // algorithm state
    main_algo_stateID = main_algo_detect;

    // check pressure value
    if(pressure_detect > threshold)
        detect_high_pressure();

    pf_main_algorithm = STATE(main_algo_waiting);
}

void set_pressure_value(int pressure)
{
    // get pressure from sensor
    pressure_detect = pressure;

    pf_main_algorithm = STATE(main_algo_detect);
}