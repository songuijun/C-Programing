#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    printf("y = ax+b (계수는 기울기 a 와 y 절편 b)일때, \n");

    double a, b;

    printf("직선의 기울기 a를 입력하세요: ");
    scanf("%lf", &a);

    printf("직선의 y 절편 b를 입력하세요: ");
    scanf("%lf", &b);

    double x, y;

    printf("한 점의 x 좌표를 입력하세요: ");
    scanf("%lf", &x);

    printf("한 점의 y 좌표를 입력하세요: ");
    scanf("%lf", &y);

    double distance = fabs(a * x - y + b) / sqrt(a * a + 1);

    printf("직선과 점의 거리는: %lf\n", distance);

    return 0;
}