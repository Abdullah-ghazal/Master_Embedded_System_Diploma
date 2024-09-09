
#include "CA.h"

// Global variables for car's speed, distance, and distance threshold
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

// Pointer to the current state function
void (*CA_state)();

// Function definition for the waiting state
STATE_define(CA_waiting)
{
     // Set the current state ID to waiting
    CA_state_id = CA_waiting;
     // Set the car speed to 0 (stopped)
    CA_speed = 0;
    // Generate a random distance within the range 45-55
    CA_distance = gen_random(45,55,1);
    
    // Check if the distance is less than or equal to the threshold
    if(CA_distance <= CA_threshold)
    {
        // Remain in the waiting state
        CA_state = STATE(CA_waiting);
    }
    else
    {
         // Transition to the driving state
        CA_state = STATE(CA_driving);
    }

    // Print the current state and relevant information
    printf("waiting state : distance %d speed = %d\n",CA_distance,CA_speed);
}


// Function definition for the driving state
STATE_define(CA_driving)
{
    // Set the current state ID to driving
    CA_state_id = CA_driving;
    // Set the car speed to 30 (moving)
    CA_speed = 30;
    // Generate a random distance within the range 45-55
    CA_distance = gen_random(45,55,1);
    
    // Check if the distance is less than or equal to the threshold
    if(CA_distance <= CA_threshold)
    {
        // Transition to the waiting state
        CA_state = STATE(CA_waiting);
    }
    else
    {
        // Remain in the driving state
        CA_state = STATE(CA_driving);
    }

     // Print the current state and relevant information
    printf("driving state : distance %d speed = %d\n",CA_distance,CA_speed);
    
}


// Function definition to generate a random number within a specified range
int gen_random(int l,int r,int count)
{
	int i;
	for(i=0; i<count; i++)
	{
		int rum=(rand()%(r-l+1)+l);
		return rum;
	}
}