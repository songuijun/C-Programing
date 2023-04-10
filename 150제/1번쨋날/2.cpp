#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void) {
	int jung, eq;
	eq = 0;
	jung = 0;


	jung = 0;
	printf("정수를 입력하여 주세요: \n");
	scanf("%d", &jung);

	eq = jung + M_PI;

	printf("두수를 입력한 값입니다. %d", M_PI, &eq);
}