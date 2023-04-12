#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int f, s, l;
	f = 0;
	s = 0;
	l = 0;
	printf("체감온도에 따른 경고 발령장치입니다.\n");
	printf("오늘이후로 3일간의 일최고체감온도를 적어주십시오");
	scanf("%d %d %d", &f, &s, &l);

	if(f>=33){
		if (s >= 33) {
			if (l >= 33) {
				printf("최소 3일 이상 33도를 기록, 폭염주의보를 발령합니다.");
			}
			else {
				printf("최소 2일 이상 33도를 기록, 폭염주의보를 발령합니다.");
			}
		}
		else if (s>=35) {
			if (l >=35) {
				printf("최소 2일이상 35도를 넘는 온도를 기록, 폭염경보를 발령합니다.");
			}
			else {
				printf("최소 2일이상 33도를 넘는 온도를 기록, 폭염주의보를 발령합니다");
			}
		}
		else {
			printf("어떠한 경보도 발령하지 않습니다.");
		}

	}
	else if (f >= 35) {
		if (s >= 35) {
			if (l >= 35) {
				printf("최소 3일이상 35도가 넘는 온도를 기록, 폭염경보를 발령합니다. ");
			}
			else {
				printf("최소 2일 이상 35도가 넘는 온도를 기록, 폭염경보를 발령합니다.");
			}
		}
		else {
			printf("최소 2일 이상 33도이상의 온도를 기록, 폭염주의보를 발령합니다.");
		}
	}
	else {
		printf("최근 3일 체감온도를 예측하였으나 폭염주의보 혹은 폭염경보를 발령할만한 온도까진 오르지 않습니다.");
	}
	return 0;
}