#include "globals.h"
#include <iostream>

int halfLoveVer = 0;
int fizzBizz = 0;

extern int counter;

void releaseHalfLove()
{
	halfLoveVer++;

	if (halfLoveVer > 2) 
	{
		halfLoveVer = 1;
	}

	printf("The game, Half-Love %d, was released! \n", halfLoveVer);
}

void stepFizzBizz()
{
	fizzBizz++;
	if (((fizzBizz % 3) == 0) && (fizzBizz % 5) == 0) {
		printf("FizzBizz \n");
	}
	else if ((fizzBizz % 3) == 0) 
	{
		printf("Fizz \n");
	} 
	else if ( (fizzBizz % 5) == 0)

	{
		printf("Bizz \n");
	}
	else 
	{
		printf("%d \n", fizzBizz);
	}
}
