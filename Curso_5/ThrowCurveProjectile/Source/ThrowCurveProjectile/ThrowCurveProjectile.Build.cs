// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ThrowCurveProjectile : ModuleRules
{
	public ThrowCurveProjectile(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
