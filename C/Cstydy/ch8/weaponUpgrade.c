#include "weaponUpgrade.h"

int weaponLv = 0;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void Upgrade()
{
	printf("강화를 진행합니다.\n");
	weaponLv = weaponLv + 1;
	currentAttackPower = baseAttackPower + weaponLv * weight;
	printf("현제 공격력 : %d, 무기 레벨 : %d\n", currentAttackPower, weaponLv);
}
