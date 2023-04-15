#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	char a, b;
	int c;
	a = 200;
	c = 0;
	b = 'a';
	printf("숫자를 입력하여주시오:");
	scanf("%d", &c);
	
	printf("%d %c %d", a, b, c);

	return 0;
}