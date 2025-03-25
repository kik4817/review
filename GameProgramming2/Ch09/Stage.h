#pragma once

#include <stdio.h>

// 세로 5 가로 6
#define STAGE_COL 5
#define STAGE_ROW 6

//STAGE 이름 = "황혼의 숲"; // '황','혼','의',' ','숲';
//이름.name = "황혼의 숲";

/* 
	1차원 배열 선언 방법 : 타입* 이름;
	2차원 배열 선언 방법 : [2][4]	[4][2] 다르기 때문에 아래처럼 표현할 수 없다
	포인터 배열 선언 방법 : 타입** 이름; -> 포인터의 배열 char* name[10]

	2차원 배열 어떻게 표현하는가? 세로 : 주소 (포인터) 가로 : 배열
	char (*map)[가로의 길이];
*/


typedef struct _STAGE
{
	char* name;
	// 2차원 배열을 저장할 수 있는 타입 선언
	char (*map)[STAGE_ROW+1];

}STAGE;

// 스트이지를 여러개 만든 다음에 선택한 스테이지를 화면에 출력하는 함수
void SetStage(STAGE* stagePtr, int index);