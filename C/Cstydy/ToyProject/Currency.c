#include "Currency.h"


bool CanUpgrade(int cost)
{
	if (cost < CurrentMoney)
	{
		CurrentMoney -= cost;
		printf("���� ������ : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("Game Over!!\n��� ���� ����߽��ϴ�\n");
		isFail = true;
	}
}
