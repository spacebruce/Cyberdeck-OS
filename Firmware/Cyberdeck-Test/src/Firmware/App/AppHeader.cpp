#include "AppHeader.hpp"

AppHeader::AppHeader(const char* Name, void (*EntryPoint)(void*))
{
    this->Name = Name;
    this->EntryPoint = EntryPoint;
}