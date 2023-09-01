#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double r = 0;
    double q1 = 0;
    double q2 = 0;
    double k = 8.988e9;  // 전자기 상수
    double Fc = 0;

    printf("r을 입력하여 주세요. : ");
    scanf("%lf", &r);

    printf("q1을 입력하여 주세요. : ");
    scanf("%lf", &q1);

    printf("q2을 입력하여 주세요. : ");
    scanf("%lf", &q2);

    Fc = (k * fabs(q1 * q2)) / (r * r);

    printf("Fc의 값은: %lf N\n", Fc);

    return 0;
}