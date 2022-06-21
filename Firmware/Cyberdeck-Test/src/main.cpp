#include <Arduino.h>

#include "Software\Test1\Test.hpp"
#include "Software\Test2\Test.hpp"

void setup()
{
    Serial.begin(115200);
    Serial.println("Startup");

    xTaskCreate(TestApp1::Run,
        "TestApp1",
        1024,
        nullptr,
        1,
        nullptr
    );
    xTaskCreate(TestApp2::Run,
        "TestApp1",
        1024,
        nullptr,
        1,
        nullptr
    );

}

void loop()
{
}