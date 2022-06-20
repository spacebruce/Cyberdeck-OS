#pragma once
#include <cstdint>

namespace Firmware
{
    namespace Utility
    {
        typedef uint32_t GUID;
        GUID MakeGUID();
    }
}