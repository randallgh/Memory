#include <iostream>
//#include <Windows.h>

void closed();
void open();

int main() 
{
	//closed();
	open();

	system("pause");
	return 0;
}

void heapAllocatedObject() 
{
	int * num = new int(10);
	float * numF = new float(10.0f);
	bool * boo = new bool(true);

	int * numA = new int[100];
	float * numFA = new float[100.0f];
	bool * booA = new bool[true];

	delete(num);
	delete(numF);
	delete(boo);

	//You have to delete each element
	delete(numA);
	delete(numFA);
	delete(booA);

}

int diffrence(int * a, int * b) 
{
	return (*a) - (*b);
}

void heapArray() 
{
	int * numA = new int[100];

	for (int i = 0; i < 100; ++i) 
	{
		numA[i] = i;
	}

	for (int i = 0; i < 100; ++i) 
	{
		std::cout << numA[i] << std::endl;
	}
}

void closed() 
{
	int * numberA = new int(5);
	int * numberB = new int(1);

	std::cout << diffrence(numberA, numberB) << std::endl;

	heapAllocatedObject();
	heapArray();
}


void funcPopArray(int * a, int length) 
{
	for (int i = 0; i < length; ++i) 
	{
		a[i] = i * 3;
	}
}

void printArray(int * a, int length) 
{
	for (int i = 0; i < length; ++i)
	{
		std::cout << a[i] << std::endl;
	}
}

void open12() 
{
	int * numArray = new int[100];
	funcPopArray(numArray, 100);
	printArray(numArray, 100);
	delete[] numArray;
}

void open3() 
{
	int * numberA = new int[100];
	int * length = new int(0);
	int * numbers = new int(0);

	printf("How many numbers will you provide? \n >");
	std::cin >> (*length);

	while ((*numbers) < (*length)) 
	{
		printf("What is number %d \n >", (*numbers) + 1);
		std::cin >> numberA[(*numbers)];
		++(*numbers);
	}

	//printArray(numberA, (*length));

	delete[] numberA;
	delete length;
	delete numbers;
}

int sum(int * a, int * length)
{
	int sum = 0;
	for (int i = 0; i < (*length); ++i) 
	{
		sum += a[i];
	}

	return sum;
}

void open4() 
{
	int * numberA = new int[100];
	int * length = new int(0);
	int * numbers = new int(0);

	printf("Howdy! Let’s try gathering up some numbers that you can use to add up to 21.\n How many numbers do ya think you’ll need ?\n >");
	std::cin >> (*length);

	while ((*numbers) < (*length))
	{
		printf("What is number %d \n >", (*numbers) + 1);
		std::cin >> numberA[(*numbers)];
		++(*numbers);
	}
	
	if (sum(numberA, length) == 21) 
	{
		printf("You added up corretly! \n");
	} 
	else 
	{
		printf("Thats not a duck. \n");
	}

}


void open() 
{
	//open12();
	//open3();
	open4();

}