#include <stdio.h>
int main()
{
	int ACount = 0;
	printf("A�������� �� : %d\n", ACount);

	for (int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}
	printf("A�������� �� : %d\n", ACount);

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("B�������� �� : %d\n", BCount);

	for (int rI = 10; rI > 0; rI--)
	{
		printf("rI �� : %d\n", rI);
	}

	/*for (;;)
	{
		printf("��ȭ�� �����Ͻðڽ��ϱ�?(y,n)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);
		if (check == 'y')
		{
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'n')
		{
			printf("��ȭ�� �׸� �ΰڽ��ϴ�..\n");
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');

			if (another == 'y')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else if (another == 'n')
			{
				printf("��ȭ�� �׸� �ΰڽ��ϴ�..\n");
			}
			else
			{
				printf("���α׷��� ����Ǿ����ϴ�.\n");
			}


			break;
		}*/

	int xi = 0;

	while (xi < 10)
	{
		xi++;

		printf("xi�� �� : %d\n", xi);
	}

	//int numA = 0;
	//int CountA = 0;
	//printf("numA�� ���� �Է����ּ���(�� 10���� �۾ƾ� �մϴ�.)\n");
	//scanf_s("%d", &numA);
	//ǥ����
	/*while (1)
	{
		numA += 2;
		CountA++;

		if (numA > 10)
		{
			printf("�ݺ��� Ƚ �� : %d\n", CountA);
			printf("���� �� : %d", numA);
			break;
		}

	}*/
	// ���� ǥ��
	/*while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}
	printf("�ݺ��� Ƚ �� : %d\n", CountA);
	printf("���� �� : %d", numA);*/

	int A = 0;

	for (int AI = 0; AI < 10; AI += 2)
	{
		A = A + 2;
		printf("A�������� �� : %d\n", A);
	}

	int B = 0;
	int CC = 0;
	while (B < 10)
	{
		B += 3;
		printf("B�������� �� : %d\n", B);
	}

	while (1)
	{
		int check;
		int enhance = 0;
		int weight = 5;
		int weaponLevel = 0;
		int basePower = 10;
		int attackPower;

		printf("���Ⱝȭ ���丮\n");
		printf("1.���Ⱝȭ\n2.���Ⱝȭ����\n3.����");
		printf("���� : ");
		scanf_s("%d", &check);
		
		if (check == 3) {
			printf("�����մϴ�.");
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
			printf("��ȭ�� �Ͻðڽ��ϱ�?(y,n)\n���� : ");
			scanf_s("%d", &check);
			switch (check)
			{
			case 1:
			{
				enhance = 1;
				printf("���⸦ ��ȭ�Ͽ����ϴ�.\n");
				break;
			case 2:
				enhance = 2;
				printf("���⸦ ��ȭ���� �ʾҽ��ϴ�.\n");
				break;
			}
			}
		else {
			printf("��ȭ�� �����ϼ���\n")l
				continue;
		}

			return 0;







		}







	}
}