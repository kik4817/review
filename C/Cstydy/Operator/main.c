#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("2025-02-19 복습\n");
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
	int HP1 = 20, Exp1 = 20, Exp2 = 50, Exp3;
	int Level1 = (Exp1 % Exp2) == 0 ? (Exp1 / Exp2) : (Exp1 / Exp2) + 1;

	printf("%d\n", Level1);
	//printf("%s의 HP는 %d과 토벌시 %d 만큼의 경험치를 획득할수있습니다.\n", "슬라임", HP1, Exp1);
	//printf("%s는 초심자 모험자로 %s을 토벌하기 위해 사냥터로 향합니다\n", "KK", "슬라임");
	//printf("%d\n", Exp2);
	//printf("%d\n", Exp3);
	

	printf("2025-02-20 복습\n");
	// 게임의 스토리1.

// 무기를 강화하는데555
// n강일 때의 무기,  n+1 무기의 정보를 화면에 출력하는 스토리를 작성해보세요.

	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackpower = basePower + weaponLv * weight;

	printf("무기의 레벨 : %d, 무기의 공격력 : %d\n", weaponLv++, attackpower);
	attackpower = basePower + weaponLv * weight;
	printf("무기의 레벨 : %d, 무기의 공격력 : %d\n", weaponLv, attackpower);

	// 게임의 스토리2.

	// 아이템 인벤토리.  Slot. 기타 아이템 수집. Stack x 갯수.
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	// A 아이템을 n개 획득, B 아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요.

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1시간 동안 사냥을 해서 아이템을 획득을 했다.\n");
	printf("A아이템 : %d, B아이템 : %d 획득했다.\n", ADrop, BDrop);

	// 나머지

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A의 갯수 :%d B의 갯수 : %d\n", AInventoryCount, BInventoryCount);
	printf("결과 :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");


}