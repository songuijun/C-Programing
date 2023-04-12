#pragma warning(disable:4996)
#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int jn, mo;
	jn = 0;
	mo = 0;

	printf("===============\n");
	printf("   자판기      \n");
	printf("===============\n");
	printf("      메뉴     \n");
	printf("[1] 콜라        500원\n");
	printf("[2] 사이다      500원  \n");
	printf("[3] 커피        500원\n");
	printf("[4] 물          500원\n");
	printf("메뉴를 선택하여 주세요: \n");
	scanf_s("%d", &jn);
	printf("지불하실 금액을 넣어주세요");
	scanf_s("%d", &mo);
	if (mo < 500) {
		printf("잔액이 부족합니다 입력하신돈 %d는 반환됩니다.",mo);
	}
	else {
		if (jn == 1) {
			mo -=500;
			printf("콜라가 배출되었습니다.\n");
			if (mo >= 1) {
				printf("잔돈 %d원을 반환 합니다.",mo);
				printf("안녕히 가십시오.");
			}
			else {
				printf("안녕히 가십시오.");
			}
		}
		else if (jn == 2) {
			mo -= 500;
			printf("사이다가 배출되었습니다.\n");
			if (mo >= 1) {
				printf("잔돈 %d원을 반환 합니다.", mo);
				printf("안녕히 가십시오.");
			}
			else {
				printf("안녕히 가십시오.");
			}
		}
		else if (jn == 3) {
			mo -=500;
			printf("커피가 배출되었습니다.\n");
			if (mo >= 1) {
				printf("잔돈 %d원을 반환 합니다.", mo);
				printf("안녕히 가십시오.");
			}
			else {
				printf("안녕히 가십시오.");
			}
		}
		else {
			mo -= 500;
			printf("물(이)가 배출되었습니다.\n");
			if (mo >= 1) {
				printf("잔돈 %d원을 반환 합니다.", mo);
				printf("안녕히 가십시오.");
			}
			else {
				printf("안녕히 가십시오.");
			}
		}
	}
	return 0;
}