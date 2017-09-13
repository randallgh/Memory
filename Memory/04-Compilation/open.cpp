#include "open.h"
#include <iostream>
#include <cassert>

int calls = 0;
char messages[5][messageLength] = { { "Hello Everynyan!" },
								{ "Shall we dance?" },
								{ "I am a bird!" },
								{ "Two wooden Pickaxes" },
								{ "BULLSHIVEKS" } };

void callMeMaybe()
{
	++calls;

	if (calls >= 5) 
	{
		calls = 0;
	}

	printf("%s", messages[calls]);
}

int picks = 0;
int & picker(int & optA, int & optB, int & optC)
{
	++picks;
	switch (picks)
	{
	case 1:
		return optA;
		break;
	case 2:
		return optB;
		break;
	case 3:
		calls = 0;
		return optC;
		break;
	default:
		break;
	}

	return optA;
	// TODO: insert return statement here
}

int arrayCopy(int * srcArr, size_t srcSize, 
				int * dstArr, size_t dstSize)
{
	assert(dstSize < srcSize && "The destination array is too small.");
	return 0;
}

void gridGen(int width, int height)
{
	assert(width * height < 0 && "The size of the grid cannot be negative");
}

void toUpper(char * cstr)
{

}

void toLower(char * cstr)
{
}

void printFile(char * filePath)
{
}
