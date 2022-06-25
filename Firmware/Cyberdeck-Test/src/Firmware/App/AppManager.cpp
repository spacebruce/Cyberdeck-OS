#include "AppManager.hpp"

namespace AppManager
{
    std::map<uint32_t, AppSignature> AppList;

    //
    AppEvent AppSignature::GetEvent()
    {
        if(this->Events.size() > 0)
        {
            AppEvent Event = this->Events.front();
            this->Events.pop();
            return Event;
        }
    }
    //

    AppIDType Load(const AppHeader* Header)
    {
        Serial.printf("Launching %s\n", Header->Name);

        static AppIDType AppID = 0;

        AppSignature Signature;
        AppList.emplace(AppID, Signature);

        Signature.AppID = AppID;

        xTaskCreate(
            Header->EntryPoint,
            Header->Name,
            1024,
            (void*) &AppID,
            1,
            &(Signature.TaskHandle)
        );

        return AppID;
    }

    AppSignature* GetAppSignature(AppIDType AppID)
    {
        auto Search = AppList.find(AppID);
        if(Search != AppList.end())
            return &(Search->second);
        return nullptr;
    }
}