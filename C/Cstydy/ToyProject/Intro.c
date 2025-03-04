#include "Intro.h"

void IntroMenu()
{
	while (1)
	{
		printf("1_게임시작\n");
		printf("2_게임종료\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			GameLoop();
		}
		else if (inputNumber == 2)
		{
			break;
		}
		else
		{
			printf("잘못된 입력입니다.\n");
		}
	}
}
