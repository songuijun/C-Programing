#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, ft = 0;
	double inch;

	printf("Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	inch = double(x) / 2.54;
		ft = inch / 12;
		inch = inch - double(ft) * 12;

		printf("%dcm�� %d��Ʈ %lf��ġ �Դϴ�. \n", cm ft, inch);
		return 0;
}