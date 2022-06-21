#include "Test.hpp"

namespace TestApp2
{
    void Run(void* parameter)
    {
        while(1)
        {
            Serial.println("Hello 2");
            vTaskDelay(100);
        }
    }
}