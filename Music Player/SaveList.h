#pragma once
#include "Playlists.h"

ref class SaveList :
    public Playlists
{
public:
    String^ path;
    Playlists^ obj;

    SaveList(Playlists^ object , String^ p) {
        obj = object;
        path = p;
    }

    

    void Save(String^ path) {
        this->path = path;
        StreamWriter^ sw = gcnew StreamWriter(path);
        // Write the name of the playlist

        sw->WriteLine(obj->name);

        for each (String ^ track in obj->tracks) {
            // Write the path of each track in the playlist
            sw->WriteLine(track);
        }
        sw->Close();
    }
};

