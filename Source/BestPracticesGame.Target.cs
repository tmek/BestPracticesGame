// Copyright. All Rights Reserved.

// For documentation on .Target.cs files see:
// https://docs.unrealengine.com/en-US/unreal-engine-build-tool-target-reference/

using UnrealBuildTool;

public class BestPracticesGameTarget : TargetRules
{
	public BestPracticesGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		ExtraModuleNames.AddRange(new[] { "BestPracticesGame" });
	}
}
