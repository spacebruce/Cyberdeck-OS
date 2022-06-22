#include "AppHeader.hpp"

namespace Firmware
{
    AppHeader::AppHeader(const char* Name, GUI::Icon* Icon, TaskFunction_t EntryPoint)
    {
        this->Name = Name;
        this->Icon = Icon;
        this->EntryPoint = EntryPoint;
    }
}