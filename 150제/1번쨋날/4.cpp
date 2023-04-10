#define _CRT_SCEUCE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1;
	printf("숫자를입력하시오: ");
	scanf("%d", &num1);

	if (num1 >= 1) {
		printf("입력된 x의 값이 y의 값보다 큽니다");
	}
	else if (num1 = 0) {
		printf("입력된 x의 값이 y의 값과 일치합니다");
	}
	else {
		printf("입력된 x의 값이 y의 값보다 작습니다.");
	}
}