#pragma once
#include <cstdint>
#include <queue>
#include <map>

#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include "..\Event.hpp"
#include "AppHeader.hpp"

typedef uint32_t AppIDType;

namespace AppManager
{
    class AppSignature
    {
    public:
        AppEvent GetEvent();
        AppHeader* Header;
        AppIDType AppID;
        TaskHandle_t TaskHandle;
    private:
        std::queue<AppEvent> Events;
    };
    extern std::map<AppIDType, AppSignature> AppList;

    //App <--> OS interface
    AppIDType Load(const AppHeader* Header);
    AppSignature* GetAppSignature(AppIDType AppID);
}