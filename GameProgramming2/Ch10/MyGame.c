#include "MyGame.h"

void InputPlayer(MYPLAYER* MyPlayerPtr)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			MyPlayerPtr->playerPos.X -= 1;
		}	
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			MyPlayerPtr->playerPos.X += 1;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			MyPlayerPtr->playerPos.Y -= 1;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			MyPlayerPtr->playerPos.Y += 1;
		}
	}
}

void ShowPlayer(const MYPLAYER* MyPlayerPtr)
{
	MyPlayerXY(MyPlayerPtr->playerPos);
	printf("¤±");
}

void MyPlayerXY(COORD MyPlayerPos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), MyPlayerPos);
}
