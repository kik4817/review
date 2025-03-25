#include "Item.h"

char itemImage1[ITEM_COL][ITEM_ROW + 1] =
{
	"     ",
	"  *  ",
	" * * ",
	" * * ",
	" * * ",
	"*****",
	"  *  ",
	"  *  "
};
char itemImage2[ITEM_COL][ITEM_ROW + 1] =
{	
	"  *  ",
	" * * ",
	" * * ",
	" * * ",
	" * * ",
	"*****",
	"  *  ",
	"  *  "
};


void ShowItem(ITEM* itemPtr, ITEM* stats[3], int itemIndex)
{
	switch (itemIndex)
	{
	case 1:
		itemPtr->name = "���ҵ�";
		itemPtr->stats = int &stats;
		itemPtr->itemIndex = itemImage1;

		break;
	case 2:
		itemPtr->name = "�ռҵ�";
		itemPtr->itemIndex = itemImage2;
		break;
	default:
		printf("�߸��� ��ȣ �Դϴ�.\n");
		break;
	}
}
