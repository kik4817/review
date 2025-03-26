#include "ConsoleGame.h"

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	// ����ǥ�� ��ġ�� ǥ��
	/*GotoXY(pos.X, pos.Y);
	printf("%s", stage[0]);
	GotoXY(pos.X, pos.Y + 1);
	printf("%s", stage[1]);
	...
	GotoXY(pos.X, pos.Y + 20);
	printf("%s", stage[20]);*/

	// �ݺ������� �����ϰ� ǥ��
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
		// NextStage�� �ϱ����� ���� Ȯ��
		//printf("���� ���������� �̵��մϴ�.\n");
		return true;
	}
	else
	{
		printf("�̵��� �� �����ϴ�.\n");
		return false;
	}
	return 0;
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{
	
}
