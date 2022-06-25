#pragma once
#include <cstdint>

enum SystemEventType : uint8_t
{
    System, Window, Keyboard, Mouse, 
};

//
struct EventSystem
{
    SystemEventType Type = SystemEventType::System;

};
struct EventWindow
{

    SystemEventType Type = SystemEventType::Window;
};
struct EventKeyboard
{

    SystemEventType Type = SystemEventType::Keyboard;
};
struct EventMouse
{
    SystemEventType Type = SystemEventType::Mouse;
};

//
union AppEvent
{
    SystemEventType Type;
    EventSystem System;
    EventWindow Window;
    EventKeyboard Keyboard;
    EventMouse Mouse;
};