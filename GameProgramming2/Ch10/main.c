// 2025-03-26

#include "ConsoleGame.h"
#include "Stage.h"
#include "MyGame.h"

int main()
{
	// ���������� ǥ��
	//for (int i = 0; i < STAGE_HEIGHT; i++)
	//{
	//	printf("%s\n", Stage2[i]);
	//}

	// ��ǥ�� �̿��ؼ� ���������� ǥ��
	COORD stagePos1 = { 20,0 };
	ShowStage(Stage1, stagePos1);

	COORD stagePos2 = { 50,0 };
	//ShowStage(Stage2, stagePos2);
	
	// �÷��̾��� ��ġ�� ǥ���ϴ� ��
	//GotoXY(10, 10);
	COORD MyPlayerPos = { 0,0 };
	MYPLAYER MyPlayer = { "���谡",MyPlayerPos };
	


	// �÷��̾  Stage1 Ż�ⱸ ��ġ�� �����ϸ� ���� ȭ���� ����� Stage2�� �׸���.
	// ���������� ���Ե� ���ڸ� ����ϴ� ����
	COORD tempPos = { 17,16 };
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf("���������� Ư�� ��ǥ ���� �� : %c\n", tempChar);

	// �÷��̾��� ���� ��ġ�� Ư�� ������ ���

	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{		
		// NextStage �ϱ����� ȭ���� ����¹��
		system("cls");                 // ��ü ȭ���� �����.
		ShowStage(Stage2, stagePos2);  // ������ ���������� ����Ѵ�.
		GotoXY(10 + 50, 10);           // Ŀ�� ��ġ�� �̵��Ѵ�.
		printf("��");                  // �÷��̷��� ���ڷ� Ǯ��
	}


	
	// �÷��̾��� ��ġ�� �̵�
	while (true)
	{
		system("cls");
		InputPlayer(&MyPlayer);
		ShowPlayer(&MyPlayer);
		ShowStage(Stage1, stagePos1);
		Sleep(100);
	}
}