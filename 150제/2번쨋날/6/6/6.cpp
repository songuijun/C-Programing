#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, m;
	m = 0;
	printf("/--------미용실-------/\n");
	printf("멋진 미용실에 오신것을 환영합니다.\n");
	printf("나이를 입력해주십시오: ");
	scanf("%d", &a);

	if (a >= 20) {
		m = 10000;
		printf("할인대상이 아닙니다.\n");
		printf("지불하실 금액은 %lf원입니다.", m);
	}
	else {
		m = 10000;
		printf("할인대상 입니다.\n");
		printf("지불하실 금액은 %lf원입니다.", m * 0.7);
	}
}