#include "PointerOperator.h"

void PointerExample()
{
	// sizeof()

	int number1 = 0;
	int* number1Ptr = &number1;

	double doubleNumber1 = 1.0;
	double* doubleNumber1Ptr = &doubleNumber1;

	printf("\n\n");
	printf("������ ���� ����\n\n");
	printf("int �������� ũ�� : %d\n", sizeof(int));
	printf("int �������� ũ�� : %d\n", sizeof(number1));
	printf("double �������� ũ�� : %d\n\n", sizeof(doubleNumber1));

	// �ּ��� ũ��
	printf("int �ּ��� ũ�� : %d\n", sizeof(number1Ptr));
	printf("double �ּ��� ũ�� : %d\n\n", sizeof(doubleNumber1Ptr));

	// x86 �ּ��� ũ�� ���� : 4����Ʈ
	// x64 �ּ��� ũ�� ���� : 8����Ʈ
	// �ּҴ� ũ�Ⱑ �����ϴ�.

	// �ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ�
	// ������ ����ϴµ�, ��ǻ�Ͱ� ��򰡿� ����ϰ� �ֽ�, �ּҶ�� �̸����� ����ϰ� �ִ�.
	// ����� �̸����� ���� ������ �� �ְ�, �ּҷ� ���� ���� ������ ���� �ִ�.

	// �ּ� ���·� �������� ����(���� ����) - ���α׷��� ����ǰų�, ���� �޸𸮸� �����ϱ� ������ ��� ���´�. ��(Heap) ����
	// ������ �̸����� �������� ����(�� ����) - {} �ڵ� ������ ������ ������ �޸𸮰� �����ȴ�. -��ƽ(Stack) ����
	
	// ��� �ڵ带 �׻� �����
	// ���� ������ ���� ����ŭ ������Ű�� �ڵ带 �ۼ��ϸ�?
	// ����Ǿ���� ������ : ���� ���� 
	// �� ���� ����ϰ� ����� ���� �� ���� : ���� ������ �����ϰ� ���� ����ġ

	// ��� �ڵ带 �� ���� ����ϰ� ������ ���ϸ�?
	// GameScore �����ͷ� �����ؼ� �����ϴ� ����� ������ �� ���� �ȴ�.
		
	printf("number1Ptr�� ���� ��� : %d\n\n", (*number1Ptr) + 1);

	// �ּҸ� ���غ���
	printf("�ּҸ� ����غ���\n");
	printf("���� �ּ� : %p\n", number1Ptr);
	// �ּҸ� ���ϸ� ��F�� �ɱ�? �迭, ������
	number1Ptr = number1Ptr + 1;
	printf("���� �ּ� : %p\n", number1Ptr);

	printf("���� �ּ� : %p\n\n", doubleNumber1Ptr);
	//doubleNumber1++;
	doubleNumber1Ptr = doubleNumber1Ptr + 1;
	printf("���� �ּ� : %p\n", doubleNumber1Ptr);

	// �ּҸ� ���ϸ�, �ּ��� ���� ������ �ִ� ũ�� ��ŭ �����Ѵ�.
	// �迭�� �������� ���� �߿�(��)

	
}
