#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, ft = 0;
	double inch;

	printf("키를 입력하시오 : ");
	scanf_s("%d", &x);

	inch = double(x) / 2.54;
		ft = inch / 12;
		inch = inch - double(ft) * 12;

		printf("%dcm는 %d피트 %lf인치 입니다. \n", cm ft, inch);
		return 0;
}