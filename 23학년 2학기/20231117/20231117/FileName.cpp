#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    printf("y = ax+b (����� ���� a �� y ���� b)�϶�, \n");

    double a, b;

    printf("������ ���� a�� �Է��ϼ���: ");
    scanf("%lf", &a);

    printf("������ y ���� b�� �Է��ϼ���: ");
    scanf("%lf", &b);

    double x, y;

    printf("�� ���� x ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &x);

    printf("�� ���� y ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &y);

    double distance = fabs(a * x - y + b) / sqrt(a * a + 1);

    printf("������ ���� �Ÿ���: %lf\n", distance);

    return 0;
}