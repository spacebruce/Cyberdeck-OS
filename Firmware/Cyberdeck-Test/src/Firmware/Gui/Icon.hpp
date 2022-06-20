#pragma once
#include "Firmware\Gui\Asset.hpp"
#include "Firmware\Gui\Sprite.hpp"

#include <cassert>
#include <utility>

namespace Firmware
{
    namespace GUI
    {

        class Icon : public Asset
        {
        public:
            Icon();

            //To do : figure out a templatey way of doing this
            Icon(Sprite sprite);
            Icon(Sprite sprite1, Sprite sprite2);
            Icon(Sprite sprite1, Sprite sprite2, Sprite sprite3);
            Icon(Sprite sprite1, Sprite sprite2, Sprite sprite3, Sprite sprite4);
        private:
            Sprite Data[4]; 
            uint8_t Sprites = 0;
            void AddSprite(Sprite NewSprite);
        };
    }
}