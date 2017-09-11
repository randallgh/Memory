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




void open() 
{

}

int main() 
{
	closed();

	system("pause");
	return 0;
}