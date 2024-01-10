#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main()
{
    double R, L, C;
    printf("���ױ��� �� R�� �Է��Ͽ� �ּ��� : ");
    scanf("%lf", &R);
    printf("������ ������� L�� �Է��Ͽ� �ּ��� : ");
    scanf("%lf", &L);
    printf("�������� ����뷮 C�� �Է��Ͽ� �ּ��� : ");
    scanf("%lf", &C);

    printf("\n");

    printf(" f = 60.0 Hz, Vmax = 1.50 x 10�� V\n\n");

    double mirco_C = C * pow(10, -6);
    double f = 60.0;
    double V_max = 1.50 * pow(10, 2);
    double X_L = 2.0 * M_PI * f * L;
    double X_C = 1.0 / (2.0 * M_PI * f * mirco_C);
    double Z = sqrt(pow(R, 2) + pow(X_L - X_C, 2));
    double I_max = V_max / Z;
    double phi = atan((X_L - X_C) / R) * (180.0 / M_PI);
    double V_R_max = I_max * R;
    double V_L_max = I_max * X_L;
    double V_C_max = I_max * X_C;

    printf("���Ǵ���                  : %.0lf ��\n", Z);
    printf("�ִ�����                  : %.3lf A\n", I_max);
    printf("����                    : %.1lf ��\n", phi);
    printf("���׿� �ɸ��� �ִ�����    : %.1lf V\n", V_R_max);
    printf("���Ͽ� �ɸ��� �ִ�����    : %.1lf V\n", V_L_max);
    printf("�����⿡ �ɸ��� �ִ�����  : % .0lf V\n", V_C_max);

    return 0;
}