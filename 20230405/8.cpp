#include <stdio.h>

int main(void) {
	float a, v, r;
	printf("반지름을 입력하시오: ");
	scanf("%f", &r);
	a = 4.0 * PIE * r * r;
	v = 4.0 / 3.0 * PIE * r * r * r;

	printf("구의 표면적: %f 구의 체적: %f\n", a, v);
	return 0;
}