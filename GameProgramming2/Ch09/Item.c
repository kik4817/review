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
		itemPtr->name = "숏소드";
		itemPtr->stats = int &stats;
		itemPtr->itemIndex = itemImage1;

		break;
	case 2:
		itemPtr->name = "롱소드";
		itemPtr->itemIndex = itemImage2;
		break;
	default:
		printf("잘못된 번호 입니다.\n");
		break;
	}
}
