#include <stdio.h>

int main(void) {
	float a, v, r;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &r);
	a = 4.0 * PIE * r * r;
	v = 4.0 / 3.0 * PIE * r * r * r;

	printf("���� ǥ����: %f ���� ü��: %f\n", a, v);
	return 0;
}