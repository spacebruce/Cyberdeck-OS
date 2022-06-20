#include "Firmware/Utility/GUID.hpp"

Firmware::Utility::GUID Firmware::Utility::MakeGUID()
{
    static GUID counter = 0;
    return (++counter);
    /*
        lol.
    */
}