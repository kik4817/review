#include "MyString.h"

void ArrayExample()
{
	printf("1. ���� �迭 ����\n\n");

	char name1 = 'a', name2 = 'p', name3 = 'p', name4 = 'l', name5 = 'e';
	printf("%c%c%c%c%c\n\n", name1, name2, name3, name4, name5);

	char words[5] = { name1,name3,name3,name4,name5 };
	for (int i = 0; i < 5; i++)
	{
		printf("%c", words[i]);
	}

	// �迭�� �ּ�, ������ �̿��ؼ� ǥ��
	printf("\n\n");
	printf("%s\n", "apple");
	printf("%p\n\n", "apple");

	// �Լ��� �̿��ؼ� ���� �迭 ���
	// scanf_s : ���ڿ��� ����� �� �ִ� ���� �����ؾ� �Ѵ�.
	
	// ���� �迭�� �ּҸ� ������ �����ϰ� �ʹ�.
	char inputArray[6];
	char* inputWord = inputArray;
	printf("�ܾ �Է����ּ���.\n");
	scanf_s("%s", inputArray, 6);
	printf("%s", inputArray);
	printf("\n\n");

	// ���ΰ��� �̸��� �������ּ���.
	// �÷��̾� ����ü - char* �ּҸ� ���޹ް� ����

	char input[10];

	printf("���ΰ��� �̸��� �Է����ּ���.\n");
	scanf_s("%s", input, 10);
	char* playerName = input;
	printf("%s", playerName);

}
