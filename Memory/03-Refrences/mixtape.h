#pragma once

#include <string>


struct Track
{
	std::string trackName; // name of track
	float playtime;        // track runtime
};

struct Playlist
{
	std::string playlistName; // name of playlist
	Track * trackList;        // pointer to array of tracks
	int numTracks;			  // number of tracks
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);
void dedupePlaylist(Playlist& pl);