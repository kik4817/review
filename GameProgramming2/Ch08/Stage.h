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
	char (*map)[6]; // ���� �迭�� �����ͷ� ǥ���ϴ� ����
}Stage;

Stage GetStageInfo(int stageNumber); // ���� 10��, ��ȣ�� �̿��ؼ� ���� ������ �������� �Լ�

// map = stage1;