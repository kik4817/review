#include <stdio.h>
#include <stdbool.h>

int main()
{
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
	int HP1 = 20, Exp1 = 20, Exp2 = 30, Exp3, Level1 = 1;
	Exp2 -= Exp1;
	Exp3 = Exp2 - Exp1;

	printf("%s�� HP�� %d�� ����� %d ��ŭ�� ����ġ�� ȹ���Ҽ��ֽ��ϴ�.\n", "������", HP1, Exp1);
	printf("%s�� �ʽ��� �����ڷ� %s�� ����ϱ� ���� ����ͷ� ���մϴ�\n", "KK", "������");
	printf("%d\n", Exp2);
	printf("%d\n", Exp3);
	



}