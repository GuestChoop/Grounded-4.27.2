// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Maine : ModuleRules
{
	public Maine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;	
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "UMG"
		});

		//PrivateDependencyModuleNames.AddRange(new string[] {});
        //if (Target.bBuildEditor) { PrivateDependencyModuleNames.Add("UnrealEd"); }
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
        // Uncomment if you are using online features
        //PrivateDependencyModuleNames.Add("OnlineSubsystem");
        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
