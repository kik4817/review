// 2025-03-21

#include "Player.h"

int main()
{
	// �÷��̾��� �⺻ �����͸� ����
	COORD playerPos = { 0,0 };
	Player player = { "���谡", playerPos }; // �̸�, ��ǥ
	

	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);
		Sleep(100);
	}
}

