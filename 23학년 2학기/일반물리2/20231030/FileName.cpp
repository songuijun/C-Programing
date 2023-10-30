#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double Vin, R1, R2, Vout;

    printf("아날로그 입력 값(Vin): ");
    scanf("%lf", &Vin);

    printf("첫 번째 저항의 저항 값(R1, 옴): ");
    scanf("%lf", &R1);

    printf("두 번째 저항의 저항 값(R2, 옴): ");
    scanf("%lf", &R2);

    Vout = Vin * (R2 / (R1 + R2));

    printf("전압 값(Vout): %.2lf\n", Vout);

    return 0;
}
