#ifndef _Main_Alogrithm_H_
#define _Main_Alogrithm_H_

#include "states.h"

// states
enum
{
    main_algo_init,
    main_algo_waiting,
    main_algo_detect
}main_algo_stateID;

// Function prototypes for each state
STATE_DEFINE(main_algo_init);
STATE_DEFINE(main_algo_waiting);
STATE_DEFINE(main_algo_detect);


// External pointer to the current state function of the main algoritnm
extern void (*pf_main_algorithm)();


#endif // _Main_Alogrithm_H_