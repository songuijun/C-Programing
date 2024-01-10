#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define M_PI 3.14
int main()
{
    double R, L, C;
    printf("R을 입력하여 주세요 : ");
    scanf("%lf", &R);
    printf("L을 입력하여 주세요 : ");
    scanf("%lf", &L);
    printf("C를 입력하여 주세요 : ");
    scanf("%lf", &C);
    printf("\n");
    printf(" f = 60.0 Hz, Vmax = 1.50 x 10² V\n");
    double mirco_C = C * pow(10, -6);
    double f = 60.0;
    double Vmax = 1.50 * pow(10, 2);
    double XL = 2.0 * M_PI * f * L;
    double XC = 1.0 / (2.0 * M_PI * f * mirco_C);
    double Z = sqrt(pow(R, 2) + pow(X_L - X_C, 2));
    double Imax = Vmax / Z;
    double phi = atan((X_L - X_C) / R) * (180.0 / M_PI);
    double VRmax = Imax * R;
    double VLmax = Imax * XL;
    double VCmax = Imax * XC;
    printf("임피던스                  : %.0lf Ω\n", Z);
    printf("최대전류                  : %.3lf A\n", Imax);
    printf("위상각                    : %.1lf °\n", phi);
    printf("저항에 걸리는 최대전압    : %.1lf V\n", VRmax);
    printf("코일에 걸리는 최대전압    : %.1lf V\n", VLmax);
    printf("축전기에 걸리는 최대전압  : % .0lf V\n", VCmax);
    return 0;
}
