#include "leture.h"
#include "Upgrade.h"
#include "CurrentMoney.h"
#include "main.h"

int number = 1;
int CurrentMoney = 1000;

void ShowInfo()
{
	printf("캐릭터의 클래스 %s\n", "모험가");
	printf("현제 가진 돈 : %d\n", CurrentMoney);

	WaitinputanyKey();
}

void WaitinputanyKey()
{
	printf("창을 닫으려면 아무 키를 입력해주세요.\n");
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