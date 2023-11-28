#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double timeStep = 0.1;
double simulationTime = 5.0;

double resistance, inductance, voltage;

double calculateCurrent(double current, double time)
{
    double currentChangeRate = (voltage - resistance * current) / inductance;
    return current + currentChangeRate * timeStep;
}
int main()
{
    printf("저항값 입력 (R): ");
    scanf("%lf", &resistance);

    printf("인덕턴스 값 입력 (L): ");
    scanf("%lf", &inductance);

    printf("전압 값 입력 (V): ");
    scanf("%lf", &voltage);

    double current = 0.0;
    double currentTime = 0.0;

    while (currentTime <= simulationTime)
    {
        printf("시간: %.3f, 전류: %.6f\n", currentTime, current);

        current = calculateCurrent(current, currentTime);
        currentTime += timeStep;
    }

    return 0;
}
