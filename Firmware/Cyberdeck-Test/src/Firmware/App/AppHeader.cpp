#include "AppHeader.hpp"

namespace Firmware
{
    AppHeader::AppHeader(const char* Name, void (*EntryPoint)(void*))
    {
        this->Name = Name;
        this->EntryPoint = EntryPoint;
    }
}