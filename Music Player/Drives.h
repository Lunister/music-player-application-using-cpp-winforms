#pragma once
#include "Session.h"
//#include <time.h>
//#include <windows.h>
//#include <string>

ref class Drives :
    public Session
{
public:
    Session^ object;

    bool usb;
    bool DVD;
    String^ path;

    
    Drives(Session^ obj) {
        object = obj;
        usb = false;
        DVD = false;
        path = nullptr;
    }

    Drives() {
        object = gcnew Session();
        usb = false;
        DVD = false;
        path = nullptr;
    }


};

