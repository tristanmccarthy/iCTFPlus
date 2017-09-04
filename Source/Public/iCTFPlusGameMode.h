#pragma once

#include "Core.h"
#include "UnrealTournament.h"
#include "UTCTFGameMode.h"

#include "iCTFPlusGameMode.generated.h"

UCLASS(Meta = (ChildCanTick), Config = iCTFPlusGameMode)
class AiCTFPlusGameMode : public AUTCTFGameMode
{
	GENERATED_UCLASS_BODY()

	float AdjustNearbyPlayerStartScore(const AController * Player, const AController * OtherController, const ACharacter * OtherCharacter, const FVector & StartLoc, const APlayerStart * P) override;
};
