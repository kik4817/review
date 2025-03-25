#pragma once

char ShortSword[4][4] =
{
	" * ",
	" * ",
	"***",
	" * ",
};

typedef struct
{
	char* name;
	char (*map)[6]; // 이중 배열을 포인터로 표현하는 형태
}Stage;

Stage GetStageInfo(int stageNumber); // 맴이 10개, 번호를 이용해서 맵의 정보를 가져오는 함수

// map = stage1;