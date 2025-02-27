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
		printf("1._강화한다.\n");
		printf("2._고급 이용소 사용.\n");
		printf("3._강화를 취소한다.\n");

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
			printf("강화를 취소\n");
			break;
		}
		else
		{
			printf("잘못된 입력값\n");
		}

		printf("진행을 하려면 아무 키를 입력해주세요.\n");
		_getch();	
	}

	
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLv = normalLv + 1;
	currentAP = currentAP + baseAP + weaponLv * weight;
	weaponLv = normalLv + advancedLv;

	printf("현제 무기 레벨 : %d, 현제 무기 공격력 : %d\n", weaponLv, currentAP);
}

void HighWeaponUpgrade()
{
	int weight = 50;

	advancedLv = advancedLv + 1;
	currentAP = currentAP + baseAP + weaponLv * weight;
	weaponLv = normalLv + advancedLv;

	printf("현제 무기 레벨 : %d, 현제 무기 공격력 : %d\n", weaponLv, currentAP);
}
