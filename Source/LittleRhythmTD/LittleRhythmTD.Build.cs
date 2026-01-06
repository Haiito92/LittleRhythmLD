// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LittleRhythmTD : ModuleRules
{
	public LittleRhythmTD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"LittleRhythmTD",
			"LittleRhythmTD/Variant_Platforming",
			"LittleRhythmTD/Variant_Platforming/Animation",
			"LittleRhythmTD/Variant_Combat",
			"LittleRhythmTD/Variant_Combat/AI",
			"LittleRhythmTD/Variant_Combat/Animation",
			"LittleRhythmTD/Variant_Combat/Gameplay",
			"LittleRhythmTD/Variant_Combat/Interfaces",
			"LittleRhythmTD/Variant_Combat/UI",
			"LittleRhythmTD/Variant_SideScrolling",
			"LittleRhythmTD/Variant_SideScrolling/AI",
			"LittleRhythmTD/Variant_SideScrolling/Gameplay",
			"LittleRhythmTD/Variant_SideScrolling/Interfaces",
			"LittleRhythmTD/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
