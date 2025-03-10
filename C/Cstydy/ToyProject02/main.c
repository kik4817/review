#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>


void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	
	ShowBorder();

	int playerX = 2;
	int playerY = 3;
	
	setCursorPos(playerX, playerY);
	printf("бр\n");

	while (1)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY += 1;
				if (playerY >= 4)
				{
					playerY = 3;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 1;
				if (playerY <= 2)
				{
					playerY = 4;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 1;
				if (playerY >= 5)
				{
					playerY = 4;
				}
			}
			else
			{

			}
		}
		
		setCursorPos(playerX, playerY);
		printf("бр");

		Sleep(50);
		//break;
	}
}