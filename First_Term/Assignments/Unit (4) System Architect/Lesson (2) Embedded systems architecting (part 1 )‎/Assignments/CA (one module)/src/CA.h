#ifndef CA_H_
#define CA_H_


#include"state.h"

// Enumeration to represent the different states of the car
enum
{
    CA_waiting,     // Car is waiting (speed = 0)
    CA_driving      // Car is driving (speed = 30)
}CA_state_id;

// Function prototypes for state functions
STATE_define(CA_waiting);
STATE_define(CA_driving);

// Function prototype for generating a random distance
int gen_random(int l,int r,int count);

// External declaration of the current state function pointer
extern void (*CA_state)();

#endif /*CA_H_*/