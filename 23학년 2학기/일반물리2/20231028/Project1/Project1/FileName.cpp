#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_CAPACITOR 10

int main() {
    int choice, n;
    double capacitors[MAX_NO_CAPACITOR] = { 0.0 };

    printf("1. 직렬 연결 (Serial Connection)\n");
    printf("2. 병렬 연결 (Parallel Connection)\n");
    printf("연결 방식을 선택하세요 (1 또는 2 입력): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("잘못된 선택입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    printf("커패시터의 개수를 입력하세요 (최대 %d개): ", MAX_NO_CAPACITOR);
    scanf("%d", &n);

    if (n < 1 || n > MAX_NO_CAPACITOR) {
        printf("유효하지 않은 커패시터 개수입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    double totalCapacitance = 0.0;

    for (int i = 0; i < n; i++) {
        printf("커패시터 #%d의 값 (F): ", i + 1);
        scanf("%lf", &capacitors[i]);
        if (choice == 1) {
            totalCapacitance += 1.0 / capacitors[i];
        }
        else {
            totalCapacitance += capacitors[i];
        }
    }

    if (choice == 1) {
        totalCapacitance = 1.0 / totalCapacitance;
    }

    printf("합성 커패시터 값: %.2lf F\n", totalCapacitance);

    return 0;
}
