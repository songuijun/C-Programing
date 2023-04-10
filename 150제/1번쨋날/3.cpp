#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int f, l,eq;
	f = 0;
	l = 0;
	eq = 0;
	printf("정수를 입력하여주세요: ");
	scanf("%d %d", &f, &l);
	eq = f + l;

	printf("결과값입니다: ",&eq);

}