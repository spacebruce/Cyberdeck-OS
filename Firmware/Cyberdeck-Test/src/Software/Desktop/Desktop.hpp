#pragma once
#include <Arduino.h>
#include "Firmware\App\AppHeader.hpp"

namespace Desktop
{
    static const char* Name = "Desktop";
    void Main(void* parameter);
    static const Firmware::AppHeader Header = Firmware::AppHeader(Name, Main);
};