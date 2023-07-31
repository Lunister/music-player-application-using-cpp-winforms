#pragma once
#using <System.dll>
#using <System.Management.dll>

using namespace System;
using namespace System::Management;

ref class USBDetector {
private:
    ManagementEventWatcher^ watcher;

public:
    bool pluggedin;


    USBDetector() {
        // Create a WMI event query to detect USB drive plug-in events
        String^ query = "SELECT * FROM Win32_DeviceChangeEvent WHERE EventType = 2";
        // Create a new event watcher to detect USB drive plug-in events
        watcher = gcnew ManagementEventWatcher(gcnew EventQuery(query));
        pluggedin = false;
    }


    String^ findPath() {
        String^ query = "SELECT DeviceID FROM Win32_DiskDrive WHERE InterfaceType='USB'";

        String^ path = "";
        // Execute the query
        ManagementObjectSearcher^ searcher = gcnew ManagementObjectSearcher(query);

        ManagementObjectCollection^ drives = searcher->Get();
        // Iterate through the drives and print their DeviceID
        for each (ManagementObject ^ drive in drives) {
            path += (drive["DeviceID"]->ToString());
        }

        return path;

    }

    void Start() {
        // Add an event handler to handle USB drive plug-in events
        watcher->EventArrived += gcnew EventArrivedEventHandler(this, &USBDetector::OnUSBEvent);
        // Start listening for USB drive plug-in events
        watcher->Start();
    }

    void Stop() {
        // Stop listening for USB drive plug-in events
        watcher->Stop();
    }

private:
    void OnUSBEvent(Object^ sender, EventArrivedEventArgs^ e) {
        // USB drive plugged in event
        pluggedin = true;
    }
};

//

