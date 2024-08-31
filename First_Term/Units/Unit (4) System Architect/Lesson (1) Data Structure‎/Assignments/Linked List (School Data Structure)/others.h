#ifndef OTHERS_H_
#define OTHERS_H_

#include<stdio.h>
#include<stdlib.h>
#include "string.h"
#include "conio.h"
#define DPRINTF(...)	{fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}





#endif