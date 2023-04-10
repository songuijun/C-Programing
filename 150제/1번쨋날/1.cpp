#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int x, y, z;
	x = 0;
	y = 0;
	z = 0;
	printf("정수값을 입력해주시오: \n");
	scanf("%d %d", &x, &y);

	z = x + y;
	printf("결과입니다: %d", &z);

	return 0;
}