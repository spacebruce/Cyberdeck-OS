#pragma once
#include <Arduino.h>
#include "Firmware\App\AppHeader.hpp"
#include "Firmware\App\AppManager.hpp"

namespace Desktop
{
    static const char* Name = "Terminal";
    void main(void* parameters);
    static const AppHeader Header = AppHeader(Name, main);  
}