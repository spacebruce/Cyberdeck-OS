#include "AppLoader.hpp"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

namespace Firmware
{
    
    bool AppLoader(const AppHeader* Header)
    {
        xTaskCreate(
            Header->EntryPoint,
            Header->Name,
            1024,
            nullptr,
            1,
            nullptr
        );
        return true;
    }
}