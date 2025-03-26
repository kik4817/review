// 2025-03-26

#include "ConsoleGame.h"
#include "Stage.h"
#include "MyGame.h"

int main()
{
	// 스테이지를 표현
	//for (int i = 0; i < STAGE_HEIGHT; i++)
	//{
	//	printf("%s\n", Stage2[i]);
	//}

	// 좌표를 이용해서 스테이지를 표현
	COORD stagePos1 = { 20,0 };
	ShowStage(Stage1, stagePos1);

	COORD stagePos2 = { 50,0 };
	//ShowStage(Stage2, stagePos2);
	
	// 플레이어의 위치를 표현하는 것
	//GotoXY(10, 10);
	COORD MyPlayerPos = { 0,0 };
	MYPLAYER MyPlayer = { "모험가",MyPlayerPos };
	


	// 플레이어가  Stage1 탈출구 위치에 도달하면 현제 화면을 지우고 Stage2를 그린다.
	// 스테이지에 포함된 문자를 출력하는 예시
	COORD tempPos = { 17,16 };
	char tempChar = ReturnValueFromStage(Stage1, tempPos);
	printf("스테이지의 특정 좌표 문자 값 : %c\n", tempChar);

	// 플레이어의 다음 위치가 특정 문자인 경우

	if (CanMoveStage(Stage1, tempPos, '@')) // CanMoveStage?
	{		
		// NextStage 하기전에 화면을 지우는방법
		system("cls");                 // 전체 화면을 지운다.
		ShowStage(Stage2, stagePos2);  // 선택한 스테이지를 출력한다.
		GotoXY(10 + 50, 10);           // 커서 위치를 이동한다.
		printf("ㅁ");                  // 플레이러를 문자로 풀력
	}


	
	// 플레이어의 위치를 이동
	while (true)
	{
		system("cls");
		InputPlayer(&MyPlayer);
		ShowPlayer(&MyPlayer);
		ShowStage(Stage1, stagePos1);
		Sleep(100);
	}
}