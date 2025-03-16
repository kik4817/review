#include "PlayerInput.h"

void PlayerPoint(int playerX, int playerY)
{
	COORD pos = { playerX, playerY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void PlayerPointVisible(enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void GetInput(int playerX, int playerY)
{
	
	while (1)
	{					
		if (_kbhit())
		{
			PlayerPoint(playerX, playerY);
			printf(" ");
			PlayerPointVisible(0);
			
			if (GetAsyncKeyState(VK_UP) % 0x8000)
			{
				playerY -= 1;
			}
			if (GetAsyncKeyState(VK_DOWN) % 0x8000)
			{
				playerY += 1;
			}
			if (GetAsyncKeyState(VK_LEFT) % 0x8000)
			{
				playerX -= 1;
			}
			if (GetAsyncKeyState(VK_RIGHT) % 0x8000)
			{
				playerX += 1;
			}
		}
		
		PlayerPoint(playerX, playerY);
		printf("бс");
		
		Sleep(50);
				
	}
}
