#include "Desktop.hpp"

namespace Desktop
{
    void main(void* parameters)
    {
        AppIDType* AppID = (AppIDType*)(parameters);
        if(AppID == nullptr)
        {
            Serial.println("?");
        }
        //else
        //{
        //    Serial.printf("%p\n");
        //}
        //auto Signature = AppManager::GetAppSignature(*AppID);
        //Serial.println(Signature->Header->Name);
        while(1)
        {
            Serial.println("Hello 1");
            vTaskDelay(100);
        }
    }
}