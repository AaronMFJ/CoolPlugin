using UnrealBuildTool;

public class CoolPlugin : ModuleRules
{
    public CoolPlugin(TargetInfo target)
    {
        PrivateIncludePaths.AddRange(new[] { "CoolPlugin/Private" });

        PrivateDependencyModuleNames.AddRange(
            new[]
        {
            "Engine",
            "UnrealEd",
            "InputCore",
            "Core",
            "Slate",
            "SlateCore",
            "EditorStyle",
            "CoreUObject"
        });
    }

}