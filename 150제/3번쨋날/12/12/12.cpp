#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int i;
	i = 2000000000;
	printf("%d\n", i);

	int j;
	j = 3000000000;//������ ������ +-2147483647��ŭ�� ����� �����ϹǷ�, �� ���ڸ� �Ѿ�� 3000000000�� ����� �ȵȴ�.
	printf("%d", j);
}