#pragma once

void callMeMaybe();

extern int calls;
const int messageLength = 20;

int& picker(int& optA, int& optB, int& optC);

extern int picks;

//Unit tests

// Copies the contents of the source array into the destination array
// - This should fail if you copy into a dst that is smaller than the src.
int arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize);

// Prints an array of Xs with the provided dimensions
// - This should fail if a negative value is provided for the width or height.
void gridGen(int width, int height);

// Converts all letters in an cstring to uppercase.
// - This should fail if any non-alphanumeric characters are detected.
void toUpper(char * cstr);

// Converts all letters in an cstring to uppercase.
// - This should fail if any non-alphanumeric characters are detected.
void toLower(char * cstr);

// Prints the contents of a text file to the terminal.
// - This should fail if the file you're attempting to load does not exist.
void printFile(char * filePath);