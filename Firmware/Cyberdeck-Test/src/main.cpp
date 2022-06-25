#include <Arduino.h>

#include "Software\Desktop\Desktop.hpp"
//#include "Software\FileBrowser\Filebrowser.hpp"
#include "Firmware\App\AppManager.hpp"

void setup()
{
    Serial.begin(115200);
    Serial.println("Startup");
    AppManager::Load(&Desktop::Header);
}

void loop()
{
    
}