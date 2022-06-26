#pragma once
#include <cstdint>

enum AppEventType : uint8_t
{
    None, System, Window, Keyboard, Mouse, 
};

//
struct EventSystem
{
    AppEventType Type;

};

struct EventWindow
{

    AppEventType Type;
};

enum KeyboardEventType
{
    Keydown, Keyup, 
};
struct EventKeyboard
{
    AppEventType Type;
    KeyboardEventType Event;
    char Keycode[4];
};

struct EventMouse
{
    AppEventType Type;
    int16_t MouseX;
    int16_t MouseY;
};

//
union AppEvent
{
    AppEventType Type;
    EventSystem System;
    EventWindow Window;
    EventKeyboard Keyboard;
    EventMouse Mouse;
};

AppEvent CreateEventSystem();
AppEvent CreateEventWindow();
AppEvent CreateEventKeyboard();
AppEvent CreateEventMouse();
AppEvent CreateEvent(AppEventType Type);