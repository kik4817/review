#include "PlayerInput.h"

void GetInput(int* playerX, int* playerY)
{	
	if (_kbhit())
	{		
		if (GetAsyncKeyState(VK_LEFT))
		{
			*playerX -= 1;
			if (*playerX <= 0)
			{
				*playerX = 0;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*playerX += 1;			
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			*playerY -= 1;
			if (*playerY <= 0)
			{
				*playerY = 0;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			*playerY += 1;
		}
	}
}

void InputExa()
{
	int playerX = 0;
	int playerY = 0;

	while (1)
	{

		GetInput(&playerX, &playerY);
		printf("x, y ÁÂÇ¥ : %d, %d\n", playerX, playerY);
		Sleep(100);
	}
}

