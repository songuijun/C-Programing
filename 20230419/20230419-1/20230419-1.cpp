//202315010
//�̷������Ƽ���а�
//������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int d, h = 0;
	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		if (guess < answer) {
			printf("HIGH\n");
		}
		if (guess > answer) {
			printf("LOW\n");
		}
	} while (guess != answer);
	printf("�����մϴ� ������ ���߼̽��ϴ�. �õ� Ƚ��=%d", tries);
	return 0;
}