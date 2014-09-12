#pragma once

//ModeuleLog does the logging and the other two restricts what info comes across the screen
DECLARE_LOG_CATEGORY_EXTERN(ModuleLog, Log, All)

class Module : public IModuleInterface
{
public:
	Module();

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};