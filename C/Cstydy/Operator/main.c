#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("2025-02-19 ����\n");
	//���丮 1
	printf("���丮1");
	int LV, AP, AA, TA;
	LV = 0, AP = 10, AA = 10;
	TA = LV * AA + AP;
	printf("���� ���� �⺻���´� ��ȭ%d ���ݷ� %d �Դϴ�.\n", LV, TA);
	printf("���� ���ݷ��� �ø������� ��ȭ�� �ϱ�� �մϴ�.\n");
	TA = ++LV * AA + AP;
	printf("���� ��ȭ�� �����Ͽ� ���� ��ȭ%d ���ݷ��� %d �Դϴ�.\n", LV, TA);
	TA = ++LV * AA + AP;
	printf("�ѹ��� ���� ��ȭ�� �����Ͽ� ���� ��ȭ%d ���ݷ��� %d �Դϴ�.\n", LV, TA);


	//���丮2
	printf("���丮2\n");
	int slot, stack1, item1, item2;
	slot = 3, item1 = 1, item2 = 1;

	printf("������ �ִ� �뷮�� %d �Դϴ�.\n", slot);
	printf("�������� %d �� �����̸� %d ��ŭ�ֿ� ���濡 �־����ϴ�.\n", item1, item2);
	printf("���� ������ ������ �����ֳ���. %d\n", slot > item1+item2);

	bool isTrue = true;
	bool isFalse = false;
	stack1 = item1 + item2;
	
	printf("���� ������ ������ �����ֳ���. %s\n", (slot > stack1++) ? "true" : "false");
	printf("���������� �����̸� �ٽ��ѹ� 1���� �ֿ�� ��������� �����ֳ���. %s\n", (slot > stack1) ? "true" : "false");
	

	//���丮3
	printf("���丮3\n");
	int HP1 = 20, Exp1 = 20, Exp2 = 50, Exp3;
	int Level1 = (Exp1 % Exp2) == 0 ? (Exp1 / Exp2) : (Exp1 / Exp2) + 1;

	printf("%d\n", Level1);
	//printf("%s�� HP�� %d�� ����� %d ��ŭ�� ����ġ�� ȹ���Ҽ��ֽ��ϴ�.\n", "������", HP1, Exp1);
	//printf("%s�� �ʽ��� �����ڷ� %s�� ����ϱ� ���� ����ͷ� ���մϴ�\n", "KK", "������");
	//printf("%d\n", Exp2);
	//printf("%d\n", Exp3);
	

	printf("2025-02-20 ����\n");
	// ������ ���丮1.

// ���⸦ ��ȭ�ϴµ�555
// n���� ���� ����,  n+1 ������ ������ ȭ�鿡 ����ϴ� ���丮�� �ۼ��غ�����.

	int basePower = 10;
	int weaponLv = 1;
	int weight = 2;

	int attackpower = basePower + weaponLv * weight;

	printf("������ ���� : %d, ������ ���ݷ� : %d\n", weaponLv++, attackpower);
	attackpower = basePower + weaponLv * weight;
	printf("������ ���� : %d, ������ ���ݷ� : %d\n", weaponLv, attackpower);

	// ������ ���丮2.

	// ������ �κ��丮.  Slot. ��Ÿ ������ ����. Stack x ����.
	// Slot �ִ� ���� : ����
	// Stack �ִ� ���� : ����
	// A �������� n�� ȹ��, B ������ m�� ȹ��
	// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����.

	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1�ð� ���� ����� �ؼ� �������� ȹ���� �ߴ�.\n");
	printf("A������ : %d, B������ : %d ȹ���ߴ�.\n", ADrop, BDrop);

	// ������

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A�� ���� :%d B�� ���� : %d\n", AInventoryCount, BInventoryCount);
	printf("��� :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");


}