#include <iostream>
#include <cassert>

#include "globals.h"
#include "incdec.h"
#include "open.h"

float divide(float lhs, float rhs);
int main()
{


	while (true) {
		//releaseHalfLove();
		//stepFizzBizz();

		/*std::cout << counter << std::endl;
		increment();
		std::cout << counter << std::endl;
		decrement();*/

		callMeMaybe();

		getchar();
	}

	//divide(1, 0);

	system("pause");
	return 0;
}

float divide(float lhs, float rhs)
{
	assert(rhs != 0 && "Division by zero detected!");

	return lhs / rhs;
}