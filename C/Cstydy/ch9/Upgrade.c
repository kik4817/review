#include "Upgrade.h"

int weaponLv = 0;
int normalLv = 0;
int advancedLv = 0;
int baseAP = 10;
int currentAP = 0;

void ShowUpgradeMenu()

{
	int normalCost = 100;
	int highCost = 500;

	while (true)
	{
		printf("1._��ȭ�Ѵ�.\n");
		printf("2._��� �̿�� ���.\n");
		printf("3._��ȭ�� ����Ѵ�.\n");

		int inputnumver = 0;

		scanf_s("%d", &inputnumver);
		while (getchar() != '\n');

		if (inputnumver == 1)
		{
			if (UseMoney(normalCost))
			{
				WeaponUpgrade();
			}
		}
		else if (inputnumver == 2)
		{
			if (UseMoney(highCost))
			{
				HighWeaponUpgrade();
			}			
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

		//WaitinputanyKey();

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
