// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "UIWidget.h"
#include "UIComponentBase.h"
#include "UISprite.generated.h"

/**
 * 
 */
UCLASS()
class EMPTY_API UUISprite : public UImage, public UUIComponentBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Appearance")
	void SetImage(FString imgPath);
	void OnLoadComplete(FSoftObjectPtr softPath);
public:
	FString spriteName;

};
