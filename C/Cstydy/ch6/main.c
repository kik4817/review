
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
		printf("1.난이도 설정\n2.게임하기\n3.내 점수 보기\n4.종료하기\n");
		printf("메뉴 선택 >>>>>");
		scanf_s("%d", &choice);

		if (choice == 4) {
			printf("게임은 잘 즐기셨나요~?? %d점으로 마무리!", totalScore);
			break;
		}

		if (choice == 1) {
			printf("1.상 2.중 3.하\n 난이도선택>>>>>");
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				difficulty = 3;
				printf("난이도가 상으로 설정되었습니다.\n");
				break;
			case 2:
				difficulty = 2;
				printf("난이도가 중으로 설정되었습니다.\n");
				break;
			case 3:
				difficulty = 1;
				printf("난이도가 하로 설정되었습니다.\n");
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
			printf("난이도를 먼저 설정하세요!\n");
			continue;
		}
		printf("정답을 입력하세요.>>>>>");
		scanf_s("%d", &choice);
		if (answer == choice) {
			printf("정답!. %d점이 추가됩니다!\n", score);
			totalScore += score;
		}
		else {
			printf("땡! 정답은 %d 였습니다!\n", answer);
		}
	}
		else if (choice == 3) {
			printf("현재 까지 내 점수 : %d\n", totalScore);
	}
		else {
			printf("다시 입력해주세요!");
		}
}

return 0;

}