#include "weaponUpgrade.h"

int weaponLv = 0;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;

void Upgrade()
{
	printf("��ȭ�� �����մϴ�.\n");
	weaponLv = weaponLv + 1;
	currentAttackPower = baseAttackPower + weaponLv * weight;
	printf("���� ���ݷ� : %d, ���� ���� : %d\n", currentAttackPower, weaponLv);
}
