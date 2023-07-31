#pragma once
#include "Drives.h"
using namespace System;
using namespace System::IO;
using namespace System::Threading;


ref class track : public Drives {

    
private:
    String^ title;
    String^ artist;
    String^ album;
    String^ path;
    int duration;
    int currentPosition;
    int bitrate;
    Thread^ updater;
    bool isPlaying;

public:
    // Constructor
    track() {
    }

    track(String^ title , String^ path) {
        this->path = path;
        this->isPlaying = false;
        // code to read the metadata of the track and fill the title, artist, album, duration and bitrate.
        // ReadTag();
    }

    // Destructor
    ~track() {
        if (updater != nullptr && updater->IsAlive) {
            updater->Abort();
        }
    }
    // Getters
    String^ GetTitle() {
        return title;
    }

    String^ GetArtist() {
        return artist;
    }

    String^ GetAlbum() {
        return album;
    }

    String^ GetPath() {
        return path;
    }

    int GetDuration() {
        return duration;
    }

    int GetCurrentPosition() {
        return currentPosition;
    }

    int GetBitrate() {
        return bitrate;
    }
    // functions for play, pause, stop
    void Play() {
        // code to play the track using MCI or other audio libraries
        isPlaying = true;
        updater = gcnew Thread(gcnew ThreadStart(this, &track::UpdateCurrentPosition));
        updater->Start();
    }

    void Pause() {
        // code to pause the track using MCI or other audio libraries
        isPlaying = false;
    }

    void Stop() {
        // code to stop the track using MCI or other audio libraries
        isPlaying = false;
        currentPosition = 0;
    }

    void UpdateCurrentPosition() {
        // code to update the current position of the track while it's playing
        while (isPlaying) {
            Thread::Sleep(500);
            //currentPosition = // read current position
        }
    }
};
