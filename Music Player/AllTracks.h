#pragma once
#include "Drives.h"
#include "track.h"

using namespace System;
using namespace System::Collections::Generic;


ref class AllTracks :
    public Drives
{
public:
    List<track^>^ allAudios;
    int totalTracks;
    String^ path;
    String^ currentTrack;

    AllTracks() {
        totalTracks = 0;
        path = nullptr;
        currentTrack = nullptr;
    }

    AllTracks(String^ p) {
        totalTracks = 0;
        path = p;
        currentTrack = nullptr;
    }



    void findAudioFiles(String^ directory) {
        // Get the files in the current directory
        array<String^>^ files = System::IO::Directory::GetFiles(directory);
        track^ obj;
        for (int i = 0; i < files->Length; i++) {
            // Check the file extension
            String^ file = files[i];
   
            if (file->EndsWith(".mp3") || file->EndsWith(".wav") || file->EndsWith(".flac")) {
                obj = gcnew track(file, directory);

                allAudios->Add(obj);
                totalTracks++;
            }
        }
        // Get the subdirectories in the current directory
        array<String^>^ subdirectories = System::IO::Directory::GetDirectories(directory);
        for (int i = 0; i < subdirectories->Length; i++) {
            // Recursively search subdirectories
            findAudioFiles(subdirectories[i]);
        }
    }



};

