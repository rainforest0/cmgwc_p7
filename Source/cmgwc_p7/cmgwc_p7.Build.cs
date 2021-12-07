// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cmgwc_p7 : ModuleRules
{
	public cmgwc_p7(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
