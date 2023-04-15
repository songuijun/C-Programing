#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int jum;

	printf("학점 계산 출력기 입니다.\n");
	printf("점수를 입력해주세요:");
	scanf("%d", &jum);

	if (jum >= 90) {
		printf("A입니다.");
	}
	else if (jum >= 80) {
		printf("B입니다.");
	}
	else if (jum >= 70) {
		printf("C입니다.");
	}
	else if (jum >= 60) {
		printf("D입니다.");
	}
	else{
		printf("F입니다.");
	}
}