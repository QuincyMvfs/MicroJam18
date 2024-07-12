// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MicroJam18 : ModuleRules
{
	public MicroJam18(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
