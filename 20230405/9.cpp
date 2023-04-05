#include <stdio.h>

int main(void) {
	float ac, ae, bc, de;
	scanf("%f%f%f", &ac, &ae, &bc);

	de = ae * bc / ac;

	printf("de는 %f입니다.\n", de);
	return 0;
}