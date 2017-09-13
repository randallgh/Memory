#include <iostream>
#include <fstream>
#include <string>

#include <random>
#include <chrono>

void closed();
void open();
int printFile(std::string file);

bool isRunning = true;

int main()
{
	srand(time(0));

	//closed();
	open();

	//ask if they want another file
	system("pause");
	return 0;
}

void closed()
{
	//Ask for input
	//enter input "file.txt"
	//call printFile
	std::string fileName;
	std::cout << "Is there a file you would like to read? \n\n" << "> ";
	std::cin >> fileName;
	printf("\n");
	printFile(fileName);

	while (isRunning)
	{
		std::cout << "\nIs there another file you would like to read? \n\n" << "> ";
		std::cin >> fileName;
		printf("\n");
		printFile(fileName);

	}


	isRunning = true;
	std::cout << "Enter a filename to save some info. \n\n" << "> ";
	std::cin >> fileName;

	std::fstream file;
	if (!fileName.compare("no")) {
		isRunning = false;
	}
	else {
		file.open(fileName, std::ios_base::out);
	}

	while (isRunning)
	{
		std::cout << "What other info? \n\n" << "> ";
		std::cin >> fileName;

		if (!fileName.compare("no")) {
			isRunning = false;
			break;
		}

		file << fileName << std::endl;

	}
}

int printFile(std::string fileName)
{
	std::fstream file;

	if (!fileName.compare("no")) {
		isRunning = false;
		return 1;
	}

	file.open(fileName);

	if (file.fail())
	{
		std::cout << "File not found" << std::endl;;
		return -1;
	}

	//Print file here
	std::cout << fileName << std::endl << "---------------------" << std::endl;

	std::string buffer;
	while ( getline(file, buffer) ) 
	{
		std::cout << buffer << std::endl;
	}

	file.close();
	return 0;
}

bool didProc(int prob)
{
	if ((rand() % 100 + 1) <= prob)
	{
		return true;
	}

	return false;
}

int printGarbledFile(std::string fileName);
int printCommaFile(std::string fileName);


void open()
{
	//printGarbledFile("importantMessage.txt");
	printCommaFile("commaSep.txt");
	printCommaFile("commaSepDos.txt");
}

int printGarbledFile(std::string fileName)
{
	std::fstream file;

	if (!fileName.compare("no")) {
		isRunning = false;
		return 1;
	}

	file.open(fileName);

	if (file.fail())
	{
		std::cout << "File not found" << std::endl;;
		return -1;
	}

	//Print file here
	std::cout << fileName << std::endl << "---------------------" << std::endl;

	std::string buffer;
	while (getline(file, buffer))
	{
		for (int i = 0; i < buffer.size(); i++) 
		{
			if (didProc(20)) {
				buffer.at(i) = 219;
			}
		}

		std::cout << buffer << std::endl;
	}

	file.close();
}

int printCommaFile(std::string fileName)
{
	std::fstream file;

	if (!fileName.compare("no")) {
		isRunning = false;
		return 1;
	}

	file.open(fileName);

	if (file.fail())
	{
		std::cout << "File not found" << std::endl;;
		return -1;
	}

	//Print file here
	std::cout << fileName << std::endl << "---------------------" << std::endl;

	int startIndex = 1;

	std::string output;
	std::string buffer;
	while (getline(file, buffer))
	{
		for (int i = 0; i < buffer.size(); ++i) 
		{
			switch (buffer.at(i))
			{
			case '{':
				break;
			case '}':
				std::cout << output << std::endl;
				break;
			case ' ':
				break;
			case ',':
				std::cout << output << std::endl;
				output = "";
				break;
			default:
				output += buffer.at(i);
				break;
			}
		}
		
	}
}