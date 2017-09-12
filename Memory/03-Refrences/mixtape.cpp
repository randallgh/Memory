#include "mixtape.h"

#include <iostream>

void printPlaylist(const Playlist & pl)
{
	for (int i = 0; i < pl.numTracks; ++i) 
	{
		if (!(pl.trackList[i].trackName == "[REMOVED]"))
		{
			printf("[ %f ] - ", pl.trackList[i].playtime);
			std::cout << pl.trackList[i].trackName << std::endl;
		}
	}
}

void shufflePlaylist(Playlist & pl)
{
	//Insert som randome booooshiz here ;w;
}

void dedupePlaylist(Playlist & pl)
{
	for (int i = 0; i < pl.numTracks; ++i)
	{
		for (int x = 0; x < pl.numTracks; ++x)
		{
			if (x != i && pl.trackList[i].trackName == pl.trackList[x].trackName) 
			{
				pl.trackList[x].trackName = "[REMOVED]";
				pl.trackList[x].playtime = 0.0f;
			}
		}
	}
}
