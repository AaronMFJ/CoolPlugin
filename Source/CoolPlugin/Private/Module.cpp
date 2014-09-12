#include "CoolPluginPCH.h"
#include "Module.h"


//Macro that registers module with Unreal/Plugin. 
//First parameter is the class --  the entry point into the engine. Second is the name of the module itself.
IMPLEMENT_MODULE(Module, CoolPlugin);
DEFINE_LOG_CATEGORY(ModuleLog)

Module::Module()
{

}

void Module::StartupModule()
{
	//category, severity, text to display
	UE_LOG(ModuleLog, Warning, TEXT("Hello from CoolPlugin!"))
}

void Module::ShutdownModule()
{

}