#include "Upgrade.h"

int weaponLv = 0;
int normalLv = 0;
int advancedLv = 0;
int baseAP = 10;
int currentAP = 0;

void ShowUpgradeMenu()
{
	while (true)
	{
		system("cls");
		printf("1._��ȭ�Ѵ�.\n");
		printf("2._��� �̿�� ���.\n");
		printf("3._��ȭ�� ����Ѵ�.\n");

		int inputnumver = 0;

		scanf_s("%d", &inputnumver);
		while (getchar() != '\n');

		if (inputnumver == 1)
		{
			WeaponUpgrade();
		}
		else if (inputnumver == 2)
		{
			HighWeaponUpgrade();
		}
		else if (inputnumver == 3)
		{
			printf("��ȭ�� ���\n");
			break;
		}
		else
		{
			printf("�߸��� �Է°�\n");
		}

		printf("������ �Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
		_getch();	
	}

	
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLv = normalLv + 1;
	currentAP = currentAP + baseAP + weaponLv * weight;
	weaponLv = normalLv + advancedLv;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLv, currentAP);
}

void HighWeaponUpgrade()
{
	int weight = 50;

	advancedLv = advancedLv + 1;
	currentAP = currentAP + baseAP + weaponLv * weight;
	weaponLv = normalLv + advancedLv;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLv, currentAP);
}
