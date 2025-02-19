#include <stdio.h>
#include <stdbool.h>

int main()
{
	//스토리 1
	printf("스토리1");
	int LV, AP, AA, TA;
	LV = 0, AP = 10, AA = 10;
	TA = LV * AA + AP;
	printf("현제 무기 기본상태는 강화%d 공격력 %d 입니다.\n", LV, TA);
	printf("무기 공격력을 올리기위해 강화를 하기로 합니다.\n");
	TA = ++LV * AA + AP;
	printf("무기 강화가 성공하여 무기 강화%d 공격력은 %d 입니다.\n", LV, TA);
	TA = ++LV * AA + AP;
	printf("한번더 무기 강화가 성공하여 무기 강화%d 공격력은 %d 입니다.\n", LV, TA);


	//스토리2
	printf("스토리2\n");
	int slot, stack1, item1, item2;
	slot = 3, item1 = 1, item2 = 1;

	printf("가방의 최대 용량은 %d 입니다.\n", slot);
	printf("나뭇가지 %d 와 돌멩이를 %d 만큼주워 가방에 넣었습니다.\n", item1, item2);
	printf("현제 가방은 공간이 남아있나요. %d\n", slot > item1+item2);

	bool isTrue = true;
	bool isFalse = false;
	stack1 = item1 + item2;

	printf("현제 가방은 공간이 남아있나요. %s\n", (slot > stack1++) ? "true" : "false");
	printf("나뭇가지와 돌멩이를 다시한번 1개씩 주우면 가방공간이 남아있나요. %s\n", (slot > stack1) ? "true" : "false");
	

	//스토리3
	printf("스토리3\n");
	int HP1 = 20, Exp1 = 20, Exp2 = 30, Exp3, Level1 = 1;
	Exp2 -= Exp1;
	Exp3 = Exp2 - Exp1;

	printf("%s의 HP는 %d과 토벌시 %d 만큼의 경험치를 획득할수있습니다.\n", "슬라임", HP1, Exp1);
	printf("%s는 초심자 모험자로 %s을 토벌하기 위해 사냥터로 향합니다\n", "KK", "슬라임");
	printf("%d\n", Exp2);
	printf("%d\n", Exp3);
	



}