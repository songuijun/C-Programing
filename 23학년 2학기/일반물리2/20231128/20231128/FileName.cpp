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
    printf("���װ� �Է� (R): ");
    scanf("%lf", &resistance);

    printf("�δ��Ͻ� �� �Է� (L): ");
    scanf("%lf", &inductance);

    printf("���� �� �Է� (V): ");
    scanf("%lf", &voltage);

    double current = 0.0;
    double currentTime = 0.0;

    while (currentTime <= simulationTime)
    {
        printf("�ð�: %.3f, ����: %.6f\n", currentTime, current);

        current = calculateCurrent(current, currentTime);
        currentTime += timeStep;
    }

    return 0;
}
