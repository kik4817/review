
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int choice;
	int score;
	int totalScore = 0;
	int difficulty = 0;
	int answer;

	srand(time(NULL));

	while (1) {
		printf("1.���̵� ����\n2.�����ϱ�\n3.�� ���� ����\n4.�����ϱ�\n");
		printf("�޴� ���� >>>>>");
		scanf_s("%d", &choice);

		if (choice == 4) {
			printf("������ �� ���̳���~?? %d������ ������!", totalScore);
			break;
		}

		if (choice == 1) {
			printf("1.�� 2.�� 3.��\n ���̵�����>>>>>");
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				difficulty = 3;
				printf("���̵��� ������ �����Ǿ����ϴ�.\n");
				break;
			case 2:
				difficulty = 2;
				printf("���̵��� ������ �����Ǿ����ϴ�.\n");
				break;
			case 3:
				difficulty = 1;
				printf("���̵��� �Ϸ� �����Ǿ����ϴ�.\n");
				break;
			}
		}
		else if(choice == 2){
			if (difficulty == 3) {
				answer = rand() % 100 + 1;
				score = 100;
			}
			else if (difficulty == 2) {
				answer = rand() % 20 + 1;
				score = 50;
			}
			else if (difficulty == 1) {
				answer = rand() % 5 + 1;
				score = 10;
			}
		else {
			printf("���̵��� ���� �����ϼ���!\n");
			continue;
		}
		printf("������ �Է��ϼ���.>>>>>");
		scanf_s("%d", &choice);
		if (answer == choice) {
			printf("����!. %d���� �߰��˴ϴ�!\n", score);
			totalScore += score;
		}
		else {
			printf("��! ������ %d �����ϴ�!\n", answer);
		}
	}
		else if (choice == 3) {
			printf("���� ���� �� ���� : %d\n", totalScore);
	}
		else {
			printf("�ٽ� �Է����ּ���!");
		}
}

return 0;

}