#include "Test.hpp"

namespace TestApp1
{
    void Run(void* parameter)
    {
        while(1)
        {
            Serial.println("Hello 1");
            vTaskDelay(100);
        }
    }
}