#pragma once
#include <freertos\FreeRTOS.h>
#include "..\Gui\Icon.hpp"

namespace Firmware
{
    class AppHeader
    {
    public:
        AppHeader(const char* Name, GUI::Icon* Icon, TaskFunction_t EntryPoint);
       // ~AppHeader();

        const char* Name;
        GUI::Icon* Icon;
        TaskFunction_t EntryPoint;
    private:
    };

}