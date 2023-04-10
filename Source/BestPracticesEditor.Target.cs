// Copyright. All Rights Reserved.

// For documentation on .Target.cs files see:
// https://docs.unrealengine.com/en-US/unreal-engine-build-tool-target-reference/

using UnrealBuildTool;

public class BestPracticesEditorTarget : TargetRules
{
	public BestPracticesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		ExtraModuleNames.AddRange(new[] { "BestPracticesGame", "BestPracticesEditor" });
	}
}
