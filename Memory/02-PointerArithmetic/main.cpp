#include <iostream>

const int SIZE = 10;

// Prints the contents of an array of floats to the terminal
void printFloats(float * arr, int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		std::cout << *(arr+i) << std::endl;
	}
}

// Returns the sum of an integer array
int arraySum(int * arr, int size) 
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum = sum + *(arr+i);
	}

	return sum;
}

// Returns the average of an array of integers
float arrayAvg(int * arr, int size) 
{
	return (float)arraySum(arr, size) / size;
}

void closed() 
{
	float * a = new float[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		*(a + i) = i;
	}

	printFloats(a, SIZE);
	delete[] a;


	int * inta = new int[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		*(inta + i) = i;
	}
	std::cout << "HELP: " << arraySum(inta, SIZE) << std::endl;
	std::cout << "Average: " << arrayAvg(inta, SIZE) << std::endl;
	delete[] inta;
}

int findCount(int target, int * arr, int size) 
{
	int count = 0;
	for (int i = 0; i < size; ++i) 
	{
		if (*(arr + i) == target) 
		{
			++count;
		}
	}

	return count;
}

void arrCopy(int * a, int aSize, int * b, int bSize) 
{
	for (int i = 0; i < aSize; ++i) 
	{
		*(b + i) = *(a + i);
	}
}

void arrReversal(int * arr, int size) 
{
	int b = size - 1;
	for (int i = 0; i < size; ++i) 
	{
		*(arr + i) = *(arr + b);
		--b;
	}
}

void cstrReversal(char * arr, int size) 
{
	int b = 0;
	for (int i = size - 1; i >= 0; --i) 
	{
		*(arr + i) = *(arr + b);
		b++;
	}
}

void open() 
{
	int * b = new int[8];
	int * a = new int[8];
	for (int i = 0; i < SIZE; ++i)
	{
		*(a + i) = i;
		*(b + i) = 10;
	}

	std::cout << "HELP A: " << findCount(2, a, 8) << std::endl;
	std::cout << "HELP A: " << findCount(8, a, 8) << " and SUM: " << arraySum(a, 8) << std::endl;
	std::cout << "HELP B: " << findCount(10, b, 8) << " and SUM: " << arraySum(b, 8) << std::endl;

	arrCopy(a, 8, b, 8);
	std::cout << "HELP B: " << findCount(10, b, 8) << " and SUM: " << arraySum(b, 8) << std::endl;

	for (int i = 0; i < 8; ++i)
	{
		std::cout << "B: " << b[i] << std::endl;
	}

	arrReversal(b, 8);

	for (int i = 0; i < 8; ++i) 
	{
		std::cout << "B Reverse: " << b[i] << std::endl;
	}

	char * c = new char[10];
	for (int i = 0; i < SIZE; ++i)
	{
		*(c + i) = i + 63;
		std::cout << "C: " << c[i] << std::endl;
	}

	cstrReversal(c, 10);

	for (int i = 0; i < SIZE; ++i)
	{
		*(c + i) = i + 63;
		std::cout << "C flipped: " << c[i] << std::endl;
	}

}

int main() 
{
	//closed();
	open();

	system("pause");
	return 0;
}