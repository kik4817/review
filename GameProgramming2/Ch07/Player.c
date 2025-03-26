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
	// x,y좌표로 이동해서 printf한다
	//GoXY(playerPtr->pos.X, playerPtr->pos.Y);
	GoXYCOORD(playerPtr->pos);
	printf("ㅁ");
}

void InteractWithItem(Player* playerPtr, Item* itemPtr)
{
	// player, item 좌표 각각의 x,y 비교해서 두 좌표가 같으면 item안에 있는 HasItem True 변경해주는 코드를 작성
}

void ShowPlayerItemInfo(Item* itemPtr)
{
	// 모든 아이템을 탐색해서 HasItemTrue인 녀석들만 정보를 보여줘
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


