// Fill out your copyright notice in the Description page of Project Settings.


#include "UIComponentBase.h"
void UUIComponentBase::SetActive(bool bActive)
{
	GetWidget()->SetVisibility(bActive ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

bool UUIComponentBase::IsActive()
{
	return GetWidget()->GetVisibility() == ESlateVisibility::Visible;
}
