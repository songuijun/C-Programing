#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, x, y;

    printf("������ ���� a�� �Է��ϼ���: ");
    scanf("%lf", &a);
    printf("������ y ���� b�� �Է��ϼ���: ");
    scanf("%lf", &b);

    printf("���� x ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &x);
    printf("���� y ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &y);

    double distance = fabs(a * x - y + b) / sqrt(a * a + 1);

    double c = y + (1 / a) * x;

    double x2 = (c - b) / (a + 1 / a);
    double y2 = (-1 / a) * x2 + c;

    printf("���������� �Ÿ��� %.2lf �Դϴ�.\n", distance);

    printf("������ �������� �������� (%.2lf, %.2lf)�Դϴ�.\n", x2, y2);

    return 0;
}
