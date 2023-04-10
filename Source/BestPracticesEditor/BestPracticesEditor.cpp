// Copyright. All Rights Reserved.

#include "BestPracticesEditor.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "BestPracticesEditor"

DEFINE_LOG_CATEGORY(LogBestPracticesEditor);

/**
 * FBestPracticesEditorModule
 */
class FBestPracticesEditorModule : public FDefaultGameModuleImpl
{
	using ThisClass = FBestPracticesEditorModule;

	virtual void StartupModule() override
	{
		if (!IsRunningGame())
		{
			FEditorDelegates::BeginPIE.AddRaw(this, &ThisClass::OnBeginPIE);
			FEditorDelegates::EndPIE.AddRaw(this, &ThisClass::OnEndPIE);
		}

		UE_LOG(LogBestPracticesEditor, Log, TEXT("BestPracticesEditor Startup."));
	}

	void OnBeginPIE(bool bIsSimulating)
	{
		UE_LOG(LogBestPracticesEditor, Log, TEXT("BestPracticesEditor OnBeginPIE(%s)."),
		       bIsSimulating ? TEXT("Simulating") : TEXT("Not Simulating"));
	}

	void OnEndPIE(bool bIsSimulating)
	{
		UE_LOG(LogBestPracticesEditor, Log, TEXT("BestPracticesEditor OnEndPIE(%s)."),
		       bIsSimulating ? TEXT("Simulating") : TEXT("Not Simulating"));
	}

	virtual void ShutdownModule() override
	{
		UE_LOG(LogBestPracticesEditor, Log, TEXT("BestPracticesEditor Shutdown."));
	}
};


IMPLEMENT_MODULE(FBestPracticesEditorModule, BestPracticesEditor);

#undef LOCTEXT_NAMESPACE
