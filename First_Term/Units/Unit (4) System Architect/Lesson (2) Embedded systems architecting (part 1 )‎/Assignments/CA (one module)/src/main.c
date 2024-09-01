#include <stdio.h>
#include <stdlib.h>

#include "CA.c"

// Function to set up the initial state
void setup()
{
    // Set the initial state to waiting
	CA_state=STATE(CA_waiting);
}

void main()
{
    // Call setup to initialize the state
	setup();

    // Infinite loop to keep the program running
	while(1)
	{
        // Execute the current state function
		CA_state();
	}

}