#include"CA.c"
#include"US.c"
#include"DC_motor.c"
void setup()
{

	US_init();
	DC_init();

	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);

}

int main()
{
	int i=0;
	setup();

	while(1)
	{
		US_state();
		CA_state();
		DC_state();
		printf("===========================\n");
		for(i=0;i<1000;i++); // Delay
	}

	return 0;
}