// Copyright Theo Leyenda 2022


#include "SelfDestructionByTimeOver.h"

USelfDestructionByTimeOver::USelfDestructionByTimeOver() : UTimeEventOver(){}

bool USelfDestructionByTimeOver::ExecuteFinishTimeEvent()
{
	GetOwner()->Destroy();
	return true;
}
