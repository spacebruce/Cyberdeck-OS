#include <Arduino.h>

#include "Software\Desktop\Desktop.hpp"
#include "Software\FileBrowser\Filebrowser.hpp"

void setup()
{
    Serial.begin(115200);
    Serial.println("Startup");

    xTaskCreate(Desktop::Header.EntryPoint,
        Desktop::Header.Name,
        1024,
        nullptr,
        1,
        nullptr
    );
    xTaskCreate(Filebrowser::main,
        "Filebrowser",
        1024,
        nullptr,
        2,
        nullptr
    );
}

void loop()
{
}