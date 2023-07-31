#pragma once
#include "Playlists.h"
#include "AllTracks.h"

ref class ShuffleList : 
	public Playlists
{
public:
	Playlists^ object;
	AllTracks^ allAudios;

	ShuffleList() {
		this->object = gcnew Playlists();
	}

	ShuffleList(Playlists^ obj) {
		this->object = obj;
		this->allAudios = nullptr;
	}

	ShuffleList(AllTracks^ obj) {
		this->object = nullptr;
		this->allAudios = obj;
	}

	void ShufflePlaylist() {
		// shuffle the tracks list
		int n = object->tracks->Count;
		while (n > 1) {
			n--;
			int k = rand() % (n + 1);
			String^ temp = object->tracks[k];
			object->tracks[k] = object->tracks[n];
			object->tracks[n] = temp;
		}
	}


	void ShuffleAllAudios() {
		int n = allAudios->totalTracks;
		while (n > 1) {
			n--;
			int k = rand() % (n + 1);
			track^ temp = allAudios->allAudios[k];
			allAudios->allAudios[k] = allAudios->allAudios[n];
			allAudios->allAudios[n] = temp;
		}
	}
	// Code to shuffle the music in the playlist



};

