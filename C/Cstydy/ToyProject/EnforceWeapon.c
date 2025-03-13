#include "EnforceWeapon.h"

void ShowMenu()
{
	printf("1. ��ȭ�Ѵ�.\n");
	printf("2. ���� ���¸� Ȯ���Ѵ�.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		if (CanUpgrade(UpgradeCost))
		{
			if (CheckRandomFunc(90))
			{
				Upgrade();
			}
			else
			{
				printf("�����߽��ϴ�.\n");
			}
		}
		ShowStatus();
	}
	else if (inputNumber == 2)
	{
		ShowStatus();
	}
	else
	{
		printf("�ش��ϴ� �Է°��� �������� �ʽ��ϴ�.\n");
		printf("�ٽ� ���� �Է����ּ���.\n");
	}

	if (IsGameClear())
	{
		//printf("������ Ŭ�����߽��ϴ�.\n");
		isClear = true;
	}
	else
	{
		printf("��ǥ ������ �޼����� ���߽��ϴ�.\n");
	}
	printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
	_getch();
	system("cls");

}

void Upgrade()
{
	CurrentLevel++;
	printf("��ȭ�� �����߽��ϴ�.\n");
}

void ShowStatus()
{
	printf("���� ���� ���� : %d\n", CurrentLevel);
	printf("���� ������ �ݾ� : %d\n", CurrentMoney);

}

bool IsGameClear()
{
	return CurrentLevel == TargetLevel ? true : false;
}
