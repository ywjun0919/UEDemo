
#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"

/**
 * 
 */
class EMPTY_API UUIComponentBase
{
public:
	bool IsActive();
	void SetActive(bool bActive);
protected:
	UWidget* GetWidget() { return (UWidget*)this; }
};
