#include "Event.hpp"

AppEvent CreateEventSystem()
{
    AppEvent event;
    event.System.Type = AppEventType::System;
    return event;
}
AppEvent CreateEventWindow()
{
    AppEvent event;
    event.Window.Type = AppEventType::Window;
    return event;
}
AppEvent CreateEventKeyboard()
{
    AppEvent event;
    event.Keyboard.Type = AppEventType::Keyboard;
    return event;
}
AppEvent CreateEventMouse()
{
    AppEvent event;
    event.Mouse.Type = AppEventType::Mouse;
    return event;
}

AppEvent CreateEvent(AppEventType Type)
{
    switch(Type)
    {
        case AppEventType::System:
            return CreateEventSystem();
        break;
        case AppEventType::Window:
            return CreateEventWindow();
        break;
        case AppEventType::Keyboard:
            return CreateEventKeyboard();
        break;
        case AppEventType::Mouse:
            return CreateEventMouse();
        break;
    }
    
    AppEvent event;
    event.Type = AppEventType::None;
    return event;
}