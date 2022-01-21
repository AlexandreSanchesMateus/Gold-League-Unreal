// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gold_League_Project : ModuleRules
{
	public Gold_League_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
