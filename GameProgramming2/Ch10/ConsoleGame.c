#include "ConsoleGame.h"

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	// 맵좌표의 위치를 표현
	/*GotoXY(pos.X, pos.Y);
	printf("%s", stage[0]);
	GotoXY(pos.X, pos.Y + 1);
	printf("%s", stage[1]);
	...
	GotoXY(pos.X, pos.Y + 20);
	printf("%s", stage[20]);*/

	// 반복문으로 간단하게 표시
	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		GotoXY(pos.X, pos.Y + i);
		printf("%s", stage[i]);
	}
}

char ReturnValueFromStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';
	returnValue = stage[pos.Y][pos.X];
	return returnValue;
}

BOOL CanMoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitCharacter)
{
	char stageChar = ReturnValueFromStage(stage, playerPos);
	if (stageChar == exitCharacter)
	{
		// NextStage를 하기위해 먼저 확인
		//printf("다음 스테이지로 이동합니다.\n");
		return true;
	}
	else
	{
		printf("이동할 수 없습니다.\n");
		return false;
	}
	return 0;
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{
	
}
