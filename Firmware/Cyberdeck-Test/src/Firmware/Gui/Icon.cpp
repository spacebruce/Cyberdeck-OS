#include "Icon.hpp"

namespace Firmware
{
    namespace GUI
    {
        void Icon::AddSprite(Sprite NewSprite)
        {
            assert(Sprites < sizeof(Data));
            Data[Sprites] = NewSprite;
            ++Sprites;
        }

        Icon::Icon(Sprite sprite)
        {
            AddSprite(sprite);
        }
        Icon::Icon(Sprite sprite1, Sprite sprite2)
        {
            AddSprite(sprite1);
            AddSprite(sprite2);
        }
        Icon::Icon(Sprite sprite1, Sprite sprite2, Sprite sprite3)
        {
            AddSprite(sprite1);
            AddSprite(sprite2);
            AddSprite(sprite3);
        }
        Icon::Icon(Sprite sprite1, Sprite sprite2, Sprite sprite3, Sprite sprite4)
        {
            AddSprite(sprite1);
            AddSprite(sprite2);
            AddSprite(sprite3);
            AddSprite(sprite4);
        }
    }
}