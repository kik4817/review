#include "Random.h"

int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % 100) + 1;
}

bool CheckRandomFunc(int percent)
{
	int randValue = ReturnRandomValue();

	if (randValue <= percent)
	{
		printf("��ȭ�� �����Ͽ����ϴ�.\n");
		return true;
	}
	else
	{
		printf("��ȭ�� �����߽��ϴ�.\n");
		return false;
	}
}
