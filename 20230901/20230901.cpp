#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double r = 0;
    double q1 = 0;
    double q2 = 0;
    double k = 8.988e9;  // ���ڱ� ���
    double Fc = 0;

    printf("r�� �Է��Ͽ� �ּ���. : ");
    scanf("%lf", &r);

    printf("q1�� �Է��Ͽ� �ּ���. : ");
    scanf("%lf", &q1);

    printf("q2�� �Է��Ͽ� �ּ���. : ");
    scanf("%lf", &q2);

    Fc = (k * fabs(q1 * q2)) / (r * r);

    printf("Fc�� ����: %lf N\n", Fc);

    return 0;
}