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

    double x0 = (x + a * y - a * b) / (a * a + 1);
    double y0 = a * x0 + b;
    double distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

    printf("������ �� (%.2lf, %.2lf) ������ �Ÿ��� %.2lf �Դϴ�.\n", x, y, distance);

    return 0;
}
