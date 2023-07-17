#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

const double MY_PI = 3.14;

#define DEG2RAD(x) ((x) * MY_PI / 180)


double x_new;
double y_new;

void rotatePoint(double angle_x, double angle_y, double angle_degree) {
    double radian = DEG2RAD(angle_degree);
    double cosine = cos(radian);
    double sine = sin(radian);

    x_new = angle_x * cosine - angle_y * sine;
    y_new = angle_x * sine + angle_y * cosine;
}

int main() {
    double angle_x, angle_y, angle_degree;
    printf("x ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &angle_x);
    printf("y ��ǥ�� �Է��ϼ���: ");
    scanf("%lf", &angle_y);
    printf("ȸ���� ������ �Է��ϼ���: ");
    scanf("%lf", &angle_degree);

    rotatePoint(angle_x, angle_y, angle_degree);

    printf("ȸ���� ��ǥ: (%lf, %lf)\n", x_new, y_new);

    return 0;
}
