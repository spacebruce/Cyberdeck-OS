#include <Arduino.h>

#include "Software\Desktop\Desktop.hpp"
//#include "Software\FileBrowser\Filebrowser.hpp"
#include "Firmware\App\AppLoader.hpp"

void setup()
{
    Serial.begin(115200);
    Serial.println("Startup");
    Firmware::AppLoader(&Desktop::Header);
}

void loop()
{
    
}