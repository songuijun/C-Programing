#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, m;
	m = 0;
	printf("/--------�̿��-------/\n");
	printf("���� �̿�ǿ� ���Ű��� ȯ���մϴ�.\n");
	printf("���̸� �Է����ֽʽÿ�: ");
	scanf("%d", &a);

	if (a >= 20) {
		m = 10000;
		printf("���δ���� �ƴմϴ�.\n");
		printf("�����Ͻ� �ݾ��� %lf���Դϴ�.", m);
	}
	else {
		m = 10000;
		printf("���δ�� �Դϴ�.\n");
		printf("�����Ͻ� �ݾ��� %lf���Դϴ�.", m * 0.7);
	}
}