#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double q, m, B, r;

    printf("전하량을 입력하여 주세요          : ");
    scanf("%lf", &q);
    printf(" X 10^-19 C\n\n");
    q *= 1e-19;

    printf("질량을 입력하여 주세요            : ");
    scanf("%lf", &m);
    printf(" X 10^-31 kg\n\n");
    m *= 1e-31;

    printf("자기장의 크기를 입력하여 주세요   : ");
    scanf("%lf", &B);
    printf(" X 10^-5 T\n\n");
    B *= 1e-5;

    printf("반지름을 입력하여 주세요          : ");
    scanf("%lf", &r);
    printf(" m\n\n");

    char charge_sign = (q > 0) ? '+' : '-';
    double v = q * B * r / m;
    double force = q * v * B;

    printf("속력 V = qvB/m = (%.1e C) x (%.1e T) x (%.1e m) / (%.1e m/s)\n", q, B, r, m);
    printf("자기력의 크기 F = qvB = (%.1e C) x (%.1e m/s) x (%.1e T) = %.1e N\n", q, v, B, force);

    return 0;
}
