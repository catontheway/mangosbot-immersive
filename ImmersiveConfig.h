#pragma once

#include "Config.h"

class ImmersiveConfig
{
public:
    ImmersiveConfig();
    static ImmersiveConfig& instance()
    {
        static ImmersiveConfig instance;
        return instance;
    }

public:
    bool Initialize();

    int serverPort;
    bool manualAttributes;
	bool fallDamageHC;
    float sharedXpPercent;
    float sharedRepPercent;
    bool sharedQuests;
    bool fishingBaubles;

private:
    Config config;
};

#define sImmersiveConfig MaNGOS::Singleton<ImmersiveConfig>::Instance()

