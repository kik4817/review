#include "2DimensionArry.h"
#include "Stage.h"
#include "Item.h"

int main()
{
	//ShowLecture();

	STAGE Stage1;
	SetStage(&Stage1, 1);
	printf("\n스테이지 이름 출력 : %s\n", Stage1.name);
	printf("스테이지1 출력\n");
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", Stage1.map[i]);
	}
	STAGE Stage2;
	SetStage(&Stage2, 2);
	printf("\n스테이지 이름 출력 : %s\n", Stage2.name);
	printf("스테이지2 출력\n");
	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", Stage2.map[i]);
	}


}