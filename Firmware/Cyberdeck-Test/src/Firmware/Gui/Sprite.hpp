#pragma once
#include <stddef.h>
#include <stdio.h>
#include <cstring>

#include "Asset.hpp"

namespace Firmware { 
    namespace GUI
    {
        class Sprite : public Asset
        {
            private:
                char* Storage;
                size_t Width = 0;
                size_t Height = 0;
                uint8_t BitDepth = 1;
                bool Dirty = true;
            public:
                inline size_t DataLength(size_t Width, size_t Height, uint8_t BitDepth)
                {
                    return ((Width * Height) / 8) * BitDepth;
                }

                //
                Sprite();
                ~Sprite();
                Sprite(char* Data); //Formatted data
                Sprite(size_t Width, size_t Height, char* Data, uint8_t BitDepth = 1);    //Copy buffer
                Sprite(size_t Width, size_t Height, uint8_t BitDepth = 1);    //Empty graphic
        };
    }
}