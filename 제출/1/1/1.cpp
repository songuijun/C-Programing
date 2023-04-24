/*20230424
미래모빌리티공학과
송의준*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &num);

        if (num < 0) break; // 음수 입력 시 종료

        printf("%d의 약수: ", num);
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) printf("%d ", i);
        }
        printf("\n");
    }

    printf("프로그램을 종료합니다.");
    return 0;
}