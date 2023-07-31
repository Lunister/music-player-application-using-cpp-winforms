#pragma once
//#include <string>

using namespace System;
using namespace System::IO;


//ref struct records {
//	String^ path;
//	bool usb;
//	bool drive;
//	String^ audio;
//
//	records() {
//		path = nullptr;
//		usb = false;
//		drive = false;
//		audio = nullptr;
//	}
//};

ref class Session
{

public:
	bool power;
    bool previousSession;


	Session() {
		power = false;
        previousSession = false;
	}

	void SaveChanges(String^ path , bool usb , bool disk , String^ currentaudio) {
		StreamWriter^ file = gcnew StreamWriter(path+"/record.txt");

		this->previousSession = true;

		file->WriteLine(path);
		file->WriteLine(usb);
		file->WriteLine(disk);
		file->WriteLine(currentaudio);

		file->Close();
	}

	//records^ retrieveChanges(String^ path) {
	//	records^ obj = gcnew records();

	//	if (this->previousSession == true) {
	//		StreamReader^ file = gcnew StreamReader(path);

	//		obj->path = file->ReadLine();
	//		obj->usb = (file->ReadLine() == "1") ? true : false;
	//		obj->drive = (file->ReadLine() == "1") ? true : false;
	//		obj->audio = file->ReadLine();

	//		return obj;
	//	}

	//	return obj;
	//}


};