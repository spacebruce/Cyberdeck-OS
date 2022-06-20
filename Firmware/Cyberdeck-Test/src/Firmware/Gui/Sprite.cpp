#include "Sprite.hpp"

namespace Firmware
{
    namespace GUI
    {
        Sprite::Sprite()
        {

        };
        Sprite::~Sprite()
        {
            if(Storage != nullptr)
                free(Storage);
        }
        Sprite::Sprite(size_t Width, size_t Height, char* Data, uint8_t BitDepth)
        {
            size_t Size = DataLength(Width, Height, BitDepth);
            Storage = static_cast<char*>(malloc(Size));//, false);
            if(Storage == nullptr)
                return;
            memmove(Storage, Data, Size);
        }
        Sprite::Sprite(size_t Width, size_t Height, uint8_t BitDepth)
        {
            size_t Size = DataLength(Width, Height, BitDepth);
            Storage = static_cast<char*>(malloc(Size));
        }
        Sprite::Sprite(char* Data)
        {
            Width = Data[0];
            Height = Data[1];
            BitDepth = Data[2];
            size_t Size = DataLength(Width, Height, BitDepth);
            Storage = static_cast<char*>(malloc(Size));
            memmove(Storage, Data + 3, Size);
        }
    }
}