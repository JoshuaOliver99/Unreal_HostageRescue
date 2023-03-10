// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HostageRescue : ModuleRules
{
	public HostageRescue(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GameplayTasks", "HeadMountedDisplay", "EnhancedInput" , "UMG" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "AIModule", "NavigationSystem" });

	}
}
