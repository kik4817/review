#include "leture.h"
#include "Upgrade.h"
#include "CurrentMoney.h"
#include "main.h"

int number = 1;
int CurrentMoney = 1000;

void ShowInfo()
{
	printf("ĳ������ Ŭ���� %s\n", "���谡");
	printf("���� ���� �� : %d\n", CurrentMoney);

	WaitinputanyKey();
}

void WaitinputanyKey()
{
	printf("â�� �������� �ƹ� Ű�� �Է����ּ���.\n");
	_getch();
}

int main()
{
	ShowInfo();
	system("cls");

	//UseMoney(1500);

	//ShowExample();
	ShowUpgradeMenu();
}