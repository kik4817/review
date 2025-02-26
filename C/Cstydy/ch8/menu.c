#include "menu.h"

void SelectMenu()
{
	while (true)
	{
		system("cls");
		printf("1_강화한다.\n");
		printf("2_취소한다.\n");
		printf("3_종료한다.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			Upgrade();			
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}

		printf("진행을 하려면 아무 키를 입력해주세요.\n");
		_getch();
	}
}
