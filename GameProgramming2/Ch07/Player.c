#include "Player.h"

void GetPlayerInput(Player* playerPtr)
{
	if(_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerPtr->pos.X -= 1;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerPtr->pos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			playerPtr->pos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerPtr->pos.Y += 1;
		}
	}
}

void ShowPlayer(const Player* playerPtr)
{
	// x,y��ǥ�� �̵��ؼ� printf�Ѵ�
	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);
	GoXYCOORD(playerPtr->pos);
	printf("��");
}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
	// player, item ��ǥ ������ x,y ���ؼ� �� ��ǥ�� ������ item�ȿ� �ִ� HasItem True �������ִ� �ڵ带 �ۼ�
}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// ��� �������� Ž���ؼ� HasItemTrue�� �༮�鸸 ������ ������
}

void GoXY(int posX, int posY)
{
	COORD pos = { posX,posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GoXYCOORD(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


