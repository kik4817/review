#include "Play.h"

int CurrentLevel = 0;
int TargetLevel = 10;
bool isClear = false;

int CurrentMoney = 10000;
int UpgradeCost = 500;
bool isFail = false;

void ShowTitle()
{
	printf("������ ����˴ϴ�\n");
	printf("================\n");
	printf("================\n");
	printf("================\n\n");

	printf("  ���� ��ȭ�ϱ�  \n\n");
}

void ShowMenul()
{
	// ���� ���
	printf(" ���� ���\n");
	printf("Ű���带 �Է� �� ����Ű�� ������ �����Ѵ�.\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ؾ��մϴ�.\n\n");
	// ���� ��ǥ
	printf(" ���� ��ǥ\n");
	printf("���� 10�� �����\n\n");
	// ���� ���� ���
	printf(" ���� �÷��� ���\n");
	printf("1. ���ѵ� ���������� ��ǥ�� �޼��ؾ� �մϴ�.\n");
	printf("2. Ư�� ���ⷹ������ ��ȭ �ϰ��� �����մϴ�.\n");
	printf("3. Ư�� �������� ���Ⱑ �ı��˴ϴ�.\n\n");
}

void GameLogic()
{
	while (1)
	{
		// �޴� ���� ȭ��
		ShowMenu();

		if (isClear || isFail)
		{
			break;
		}
	}

	if (isClear)
	{
		printf("Game Clear\n");
	}
	if (isFail)
	{
		printf("Game Over\n");
	}
}

void GameLoop()
{
	ShowTitle();
	ShowMenul();
	GameLogic();
}
