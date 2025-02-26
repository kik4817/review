#include <stdio.h>
int main()
{
	int ACount = 0;
	printf("A아이템의 수 : %d\n", ACount);

	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}
	printf("A아이템의 수 : %d\n", ACount);

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B아이템의 수 : %d\n", BCount);

	for (int rI = 10; rI > 0; rI--)
	{
		printf("rI 값 : %d\n", rI);
	}

	/*for (;;)
	{
		printf("강화를 진행하시겠습니까?(y,n)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);
		if (check == 'y')
		{
			printf("강화를 진행합니다.\n");
		}
		else if (check == 'n')
		{
			printf("강화를 그만 두겠습니다..\n");
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');

			if (another == 'y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (another == 'n')
			{
				printf("강화를 그만 두겠습니다..\n");
			}
			else
			{
				printf("프로그램이 종료되었습니다.\n");
			}


			break;
		}*/

	int xi = 0;

	while (xi < 10)
	{
		xi++;

		printf("xi의 값 : %d\n", xi);
	}

	//int numA = 0;
	//int CountA = 0;
	//printf("numA의 값을 입력해주세요(단 10보다 작아야 합니다.)\n");
	//scanf_s("%d", &numA);
	//표현법
	/*while (1)
	{
		numA += 2;
		CountA++;

		if (numA > 10)
		{
			printf("반복한 횟 수 : %d\n", CountA);
			printf("현재 값 : %d", numA);
			break;
		}

	}*/
	// 쉽게 표현
	/*while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}
	printf("반복한 횟 수 : %d\n", CountA);
	printf("현재 값 : %d", numA);*/

	int A = 0;

	for (int AI = 0; AI < 10; AI += 2)
	{
		A = A + 2;
		printf("A아이템의 수 : %d\n", A);
	}

	int B = 0;
	int CC = 0;
	while (B < 10)
	{
		B += 3;
		printf("B아이템의 수 : %d\n", B);
	}

	while (1)
	{
		int check;
		int enhance = 0;
		int weight = 5;
		int weaponLevel = 0;
		int basePower = 10;
		int attackPower;

		printf("무기강화 스토리\n");
		printf("1.무기강화\n2.무기강화상태\n3.종료");
		printf("선택 : ");
		scanf_s("%d", &check);
		
		if (check == 3) {
			printf("종료합니다.");
			break;
		}
		
	
		if(check == 2) {
			if (enhance == 1) {
				attackPower = basePower + weaponLevel * weight;
			}
			else if (enhance == 2) {
				attackPower = basePower + weaponLevel * weight;
			}
		}
		else if (check == 1)
		{
			printf("강화를 하시겠습니까?(y,n)\n선택 : ");
			scanf_s("%d", &check);
			switch (check)
			{
			case 1:
			{
				enhance = 1;
				printf("무기를 강화하였습니다.\n");
				break;
			case 2:
				enhance = 2;
				printf("무기를 강화하지 않았습니다.\n");
				break;
			}
			}
		else {
			printf("강화를 먼저하세요\n")l
				continue;
		}

			return 0;







		}







	}
}