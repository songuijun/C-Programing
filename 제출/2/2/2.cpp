/*20230424
 ������
 �̷������Ƽ���а�
 202315010*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void) {

	int i, j, isPrime;//isPrime �Ҽ����Ǻ����ִ� �Լ�

	for (i = 2; i <= 100; i++) {
		
		isPrime = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {	
			printf("%d ", i);
		}
	}

	return 0;
}