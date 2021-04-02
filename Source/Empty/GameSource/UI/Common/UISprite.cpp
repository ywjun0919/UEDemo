// Fill out your copyright notice in the Description page of Project Settings.


#include "PaperSprite.h"
#include "Styling/SlateBrush.h"
#include "UISprite.h"

void UUISprite::SetImage(FString imgPath)
{
	this->spriteName = imgPath;
	FSoftObjectPtr	softPath = FSoftObjectPtr(imgPath);
	this->RequestAsyncLoad(softPath.Get(), FStreamableDelegate::CreateLambda([this, softPath]() {
		this->OnLoadComplete(softPath);
	}));
}
void UUISprite::OnLoadComplete(FSoftObjectPtr softPath)
{
	UObject* uObject = softPath.Get();
	if (uObject->IsA(UPaperSprite::StaticClass()))
	{
		UPaperSprite * sprite = (UPaperSprite*)uObject;
		FSlateBrush brush;
		brush.SetResourceObject(sprite);
		this->SetBrush(brush);
	}
	else if (uObject->IsA(UTexture2D::StaticClass()))
	{
		UTexture2D* texture = (UTexture2D*)uObject;
		this->SetBrushFromTexture(texture);
	}
}
