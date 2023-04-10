// Copyright. All Rights Reserved.

// For documentation on .Build.cs files see:
// https://docs.unrealengine.com/en-US/module-properties-in-unreal-engine/

using UnrealBuildTool;

public class BestPracticesEditor : ModuleRules
{
	public BestPracticesEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new[]
			{
				"BestPracticesEditor"
			}
		);

		PrivateIncludePaths.AddRange(
			new string[]
			{
			}
		);

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"EditorFramework",
				"UnrealEd",
				"BestPracticesGame"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);

		// Generate compile errors if using DrawDebug functions in test/shipping builds.
		PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");
	}
}
