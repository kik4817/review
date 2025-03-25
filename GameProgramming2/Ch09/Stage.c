#include "Stage.h"

char Stage1[STAGE_COL][STAGE_ROW + 1] =
{
	"******",
	"*    *",
	"*    *",
	"*    *",
	"******"
};

char Stage2[STAGE_COL][STAGE_ROW + 1] =
{
	"******",
	"**   *",
	"* *  *",
	"*   **",
	"******"
};

void SetStage(STAGE* stagePtr, int index)
{
	switch (index)
	{
	case 1:
		// �������� 1���� �����Ѵ� -> Stage1 �����´�.
		stagePtr->name = "Ȳȥ�� ��";
		stagePtr->map = Stage1;
		break;
	case 2:
		stagePtr->name = "���� ��";
		stagePtr->map = Stage2;
		break;
	default:
		printf("�߸��� �������� ��ȣ�Դϴ�.\n");
		break;
	}
}
