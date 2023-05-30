#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum class EItemType
{
	Cash			UMETA(DisplayName = "Cash"),
	Jewelery		UMETA(DisplayName = "Jewelery"),
	Electronics		UMETA(DisplayName = "Electronics"),
	Tools			UMETA(DisplayName = "Tools"),
	Alcohol			UMETA(DisplayName = "Alcohol"),
	Contraband		UMETA(DisplayName = "Contraband"),
};

USTRUCT(BlueprintType)
struct FItemInfo : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType = EItemType::Cash;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Weight = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Size = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValueRandomization = 0.f;
};

UCLASS()
class POLYTHEFT_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
