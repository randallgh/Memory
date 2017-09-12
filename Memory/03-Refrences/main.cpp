#include <iostream>

#include "mixtape.h"
#include "Aussiegochi.h"

void product(float a, float b, float& c);
//void closed();
void open();
void tracklist();


int main()
{
	//closed();
	//open();
	tracklist();

	system("Pause");
	return 0;
}
void closed()
{
	float eh = 1.0f;
	float beh = 10.0f;
	float output = 1.0f;

	product(eh, beh, output);
	printf("%f", output);

	std::cout << "HELP";

	std::cout << output << std::endl;

	product(beh, eh, output);
	std::cout << output << std::endl;

	product(output, eh, output);
	std::cout << output << std::endl;
}

void product(float a, float b, float& c)
{
	c = a * b;
}

void swap(float& a, float &b)
{
	float temp = a;
	a = b;
}

void open()
{
	float meh = 9.5f;
	float beh = 8.6f;

	printf("Before: meh: %f, beh: %f \n", meh, beh);
	swap(meh, beh);
	printf("After: meh: %f, beh: %f \n", meh, beh);
}

void tracklist()
{
	Track song1 = { "Grandma", 4.00 };
	Track song2 = { "Black + White", 3.30 };
	Track song3 = { "The Gensokyo the Gods loved", 9.00 };
	Track song4 = { "Wretched Weapons", 5.00 };
	Track song5 = { "The Pocketwatch of blood", 4.00 };
	Track song6 = { "Hiein Alien", 10.00 };

	Track song7 = { "The Gensokyo the Gods loved", 9.00 };
	Track song8 = { "The Gensokyo the Gods loved", 9.00 };
	Track song9 = { "The Gensokyo the Gods loved", 9.00 };

	Track songlist[] = { song1,song2,song3,song4,song5,song6,song7,song8,song9 };

	Playlist littape = { "LIT TAPE", songlist, 9 };

	printPlaylist(littape);

	dedupePlaylist(littape);
	printPlaylist(littape);

}