#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int value;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	printf("���� �ڸ�: %d\n", (value / 10) % 10);
	printf("���� �ڸ�:%d\n", (value) % 10);
	return 0;
}