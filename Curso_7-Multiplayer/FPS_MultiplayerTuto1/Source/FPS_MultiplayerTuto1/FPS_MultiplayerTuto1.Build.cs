// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_MultiplayerTuto1 : ModuleRules
{
	public FPS_MultiplayerTuto1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
