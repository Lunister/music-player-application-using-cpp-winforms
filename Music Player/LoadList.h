#pragma once
#include "Playlists.h"
ref class LoadList :
    public Playlists
{
private:
    Playlists^ object;

public:
    LoadList(Playlists^ obj) {
        this->object = obj;
    }



    //Playlists^ Load(String^ path) {
    //    StreamReader^ sr = gcnew StreamReader(path);
    //    // Read the name of the playlist
    //    String^ name = sr->ReadLine();
    //    Playlists^ playlist = gcnew Playlists(name);
    //    String^ line;
    //    while ((line = sr->ReadLine()) != nullptr) {
    //        // Create a new Track for each path read from the file
    //        AudioFiles^ track = gcnew AudioFiles(line);
    //        playlist->AddTrack(track);
    //    }
    //    sr->Close();
    //    return playlist;
    //}


};

