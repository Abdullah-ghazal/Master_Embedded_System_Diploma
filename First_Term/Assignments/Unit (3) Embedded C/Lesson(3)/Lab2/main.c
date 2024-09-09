// Eng.Shady mamdouh
#include "stdint.h"
#define RCC_BASE 0x40021000
#define GPIO_BASE 0x40010800
typedef union{  uint32_t all_pins;
				struct{
					uint32_t pin0:1;
					uint32_t pin1:1;
					uint32_t pin2:1;
					uint32_t pin3:1;
					uint32_t pin4:1;
                    uint32_t pin5:1;
                    uint32_t pin6:1;
					uint32_t pin7:1;
					uint32_t pin8:1;
					uint32_t pin9:1;
					uint32_t pin10:1;
                    uint32_t pin11:1;
                    uint32_t pin12:1;
					uint32_t pin13:1;
					uint32_t pin14:1;
					uint32_t pin15:1;
					uint32_t pin16:1;
                    uint32_t pin17:1;
                    uint32_t pin18:1;
					uint32_t pin19:1;
					uint32_t pin20:1;
					uint32_t pin21:1;
					uint32_t pin22:1;
                    uint32_t pin23:1;
                    uint32_t pin24:1;
					uint32_t pin25:1;
					uint32_t pin26:1;
					uint32_t pin27:1;
					uint32_t pin28:1;
                    uint32_t pin29:1;
                    uint32_t pin30:1;
                    uint32_t pin31:1;
				      };
} reg_pin;
volatile reg_pin *APB2ENR=(volatile reg_pin*)(RCC_BASE+0x18);
volatile reg_pin *CRH=(volatile reg_pin*)(GPIO_BASE+0x04);
volatile reg_pin *PORTA=(volatile reg_pin*)(GPIO_BASE+0x0C);
unsigned char g_variables[3] = {1,2,3};
unsigned char const const_variables[3]={1,2,3};
int main(void)
{    volatile int i ;
	APB2ENR->pin2=1;
	CRH->all_pins=0;
	CRH->pin21=1;
	while(1)
	{    for(i=0;i<50000;i++){};
		PORTA->pin13=1;
		for(i=0;i<50000;i++);
		PORTA->pin13=0;
	}

}