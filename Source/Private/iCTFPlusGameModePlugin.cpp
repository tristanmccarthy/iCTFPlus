#include "iCTFPlusGameMode.h"

#include "Core.h"
#include "Engine.h"
#include "ModuleManager.h"
#include "ModuleInterface.h"

class FiCTFPlusGameModePlugin : public IModuleInterface
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FiCTFPlusGameModePlugin, iCTFPlusGameMode )

void FiCTFPlusGameModePlugin::StartupModule()
{
	
}


void FiCTFPlusGameModePlugin::ShutdownModule()
{
	
}



