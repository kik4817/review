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
		printf("강화에 성공하였습니다.\n");
		return true;
	}
	else
	{
		printf("강화에 실패했습니다.\n");
		return false;
	}
}
