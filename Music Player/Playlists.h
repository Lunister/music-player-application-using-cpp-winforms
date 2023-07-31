#pragma once
#include "track.h"
#include <stdlib.h>

using namespace System;
using namespace System::Collections::Generic;

ref class Playlists : public track {

public:
    String^ name;
    List<String^>^ tracks;
    int currentTrackIndex;

    Playlists() {
        tracks = gcnew List<String^>();
        currentTrackIndex = -1;
    }

    void AddTrack(String^ path) {
        tracks->Add(path);
    }

    void RemoveTrack(int index) {
        tracks->RemoveAt(index);
    }

    String^ GetTrack(int index) {
        return tracks[index];
    }

    int GetNumberOfTracks() {
        return tracks->Count;
    }

    void PlayTrack(int index) {
        if (index >= 0 && index < tracks->Count) {
            currentTrackIndex = index;
            // play the track using the MCI
            //mciSendString(("open \"" + tracks[currentTrackIndex] + "\" type mpegvideo alias MediaFile").c_str(), NULL, 0, NULL);
            //mciSendString("play MediaFile", NULL, 0, NULL);
        }
    }

    void NextTrack() {
        if (currentTrackIndex < tracks->Count - 1) {
            PlayTrack(currentTrackIndex + 1);
        }
    }

    void PrevTrack() {
        if (currentTrackIndex > 0) {
            PlayTrack(currentTrackIndex - 1);
        }
    }




};