#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int jum;

	printf("���� ��� ��±� �Դϴ�.\n");
	printf("������ �Է����ּ���:");
	scanf("%d", &jum);

	if (jum >= 90) {
		printf("A�Դϴ�.");
	}
	else if (jum >= 80) {
		printf("B�Դϴ�.");
	}
	else if (jum >= 70) {
		printf("C�Դϴ�.");
	}
	else if (jum >= 60) {
		printf("D�Դϴ�.");
	}
	else{
		printf("F�Դϴ�.");
	}
}