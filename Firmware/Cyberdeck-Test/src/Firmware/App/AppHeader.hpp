#pragma once
#include <freertos\FreeRTOS.h>
#include <functional>

namespace Firmware
{
    class AppHeader
    {
    public:
        AppHeader(const char* Name, void (*EntryPoint)(void*));
        //~AppHeader();

        const char* Name;
        void (*EntryPoint)(void*);
    private:
    };
}