#include "Desktop.hpp"

namespace Desktop
{

    void Main(void* parameter)
    {
        while(1)
        {
            Serial.println("Hello 1");
            vTaskDelay(100);
        }
    }
}