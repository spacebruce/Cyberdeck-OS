#pragma once
#include "Firmware/Utility/GUID.hpp"

namespace Firmware
{
    namespace GUI
    {
        class Asset
        {
        private:
            Utility::GUID GUID;
        public:
            Utility::GUID GetGUID();
        };
    }
}