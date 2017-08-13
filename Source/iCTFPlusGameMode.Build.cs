namespace UnrealBuildTool.Rules
{
	public class iCTFPlusGameMode: ModuleRules
	{
		public iCTFPlusGameMode(TargetInfo Target)
        {
            PrivateIncludePaths.Add("iCTFPlusGameMode/Private");

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
                    "Engine",
                    "UnrealTournament"
				}
				);
		}
	}
}