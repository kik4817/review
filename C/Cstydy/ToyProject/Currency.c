#include "Currency.h"


bool CanUpgrade(int cost)
{
	if (cost < CurrentMoney)
	{
		CurrentMoney -= cost;
		printf("현재 소지금 : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("Game Over!!\n모든 돈을 사용했습니다\n");
		isFail = true;
	}
}
