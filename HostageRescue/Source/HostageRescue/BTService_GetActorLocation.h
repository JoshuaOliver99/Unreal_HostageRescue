// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_GetActorLocation.generated.h"

/**
 * NOTE: ActorBlackboardKey must be of type Actor
 */
UCLASS()
class HOSTAGERESCUE_API UBTService_GetActorLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_GetActorLocation();

	UPROPERTY(EditAnywhere, Category=Blackboard, meta = (BaseClass = "AActor"))
	struct FBlackboardKeySelector ActorBlackboardKey;
	
private:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	virtual FString GetStaticDescription() const override;
};
