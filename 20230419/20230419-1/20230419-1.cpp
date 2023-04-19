//202315010
//미래모빌리티공학과
//송의준
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int d, h = 0;
	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess < answer) {
			printf("HIGH\n");
		}
		if (guess > answer) {
			printf("LOW\n");
		}
	} while (guess != answer);
	printf("축하합니다 정답을 맞추셨습니다. 시도 횟수=%d", tries);
	return 0;
}