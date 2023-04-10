// Copyright. All Rights Reserved.

#include "BestPracticesLogChannels.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "BestPracticesGame"

/**
 * FBestPracticesGameModule
 */
class FBestPracticesGameModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		UE_LOG(LogBestPractices, Log, TEXT("BestPracticesGameModule Startup."));
	}

	virtual void ShutdownModule() override
	{
		UE_LOG(LogBestPractices, Log, TEXT("BestPracticesGameModule Shutdown."));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBestPracticesGameModule, BestPracticesGame, "BestPracticesGame");

#undef LOCTEXT_NAMESPACE
