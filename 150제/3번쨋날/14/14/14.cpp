#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main() {
	int b;
	b = 0;
	b = 10 > 5;

	if (b && 10>5) {
		printf("10은 5보다 큽니다.");
	}
	else {
		printf("10은 5보다 작습니다.");
	}
	return 0;
 }