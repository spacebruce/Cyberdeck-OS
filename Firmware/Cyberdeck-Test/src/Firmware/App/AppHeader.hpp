#pragma once

#include "..\Gui\Icon.hpp"

namespace Firmware
{
    struct Appheader
    {
    //Aesthetic
        char Name[16];
        GUI::Icon Icon;
    //OS
        void* EntryPoint;
    };
}