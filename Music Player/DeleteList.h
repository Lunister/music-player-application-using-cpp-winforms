#pragma once
#include "Playlists.h"
ref class DeleteList :
    public Playlists
{
private:
    Playlists^ object;
public:
    DeleteList(Playlists^ obj) {
        this->object = obj;
    }

    // Code to Delete a playlist




};

