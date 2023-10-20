#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

double calculateResistance4Color(int color1, int color2, int color3, int color4, double* Resistance_error_value)
{
    double resistanceValues[] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 };

    double resistance = resistanceValues[color1];
    resistance = (resistance * 10.0) + resistanceValues[color2];

    double error = 0.0;

    switch (color3) {
    case 0:
        resistance *= 1.0;
        break;
    case 1:
        resistance *= 10.0;
        break;
    case 2:
        resistance *= 100.0;
        break;
    case 3:
        resistance *= 1000.0;
        break;
    case 4:
        resistance *= 10000.0;
        break;
    case 5:
        resistance *= 100000.0;
        break;
    case 6:
        resistance *= 1000000.0;
        break;
    case 7:
        resistance *= 10000000.0;
        break;
    case 8:
        resistance *= 100000000.0;
        break;
    case 9:
        resistance *= 1000000000.0;
        break;
    case 10:
        resistance *= 0.1;
        break;
    case 11:
        resistance *= 0.01;
        break;
    default:
        printf("�������� �ʽ��ϴ�.\n");
        return 0.0;
    }

    switch (color4) {
    case 1:
        error = 1;
        break;
    case 2:
        error = 2;
        break;
    case 5:
        error = 0.5;
        break;
    case 6:
        error = 0.25;
        break;
    case 7:
        error = 0.1;
        break;
    case 8:
        error = 0.05;
        break;
    case 10:
        error = 5;
        break;
    case 11:
        error = 10;
        break;
    default:
        printf("�������� �ʽ��ϴ�.\n");
        return 0.0;
    }
    *Resistance_error_value = error;

    return resistance;
}
double calculateResistance5Color(int color1, int color2, int color3, int color4, int color5, double* Resistance_error_value)
{
    double resistanceValues[] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0 };

    double resistance = resistanceValues[color1];
    resistance = (resistance * 10.0) + resistanceValues[color2];
    resistance = (resistance * 10.0) + resistanceValues[color3];

    double error = 0.0;

    switch (color4) {
    case 0:
        resistance *= 1.0;
        break;
    case 1:
        resistance *= 10.0;
        break;
    case 2:
        resistance *= 100.0;
        break;
    case 3:
        resistance *= 1000.0;
        break;
    case 4:
        resistance *= 10000.0;
        break;
    case 5:
        resistance *= 100000.0;
        break;
    case 6:
        resistance *= 1000000.0;
        break;
    case 7:
        resistance *= 10000000.0;
        break;
    case 8:
        resistance *= 100000000.0;
        break;
    case 9:
        resistance *= 1000000000.0;
        break;
    case 10:
        resistance *= 0.1;
        break;
    case 11:
        resistance *= 0.01;
        break;
    default:
        printf("�������� �ʽ��ϴ�.\n");
        return 0.0;
    }

    switch (color5) {
    case 1:
        error = 1;
        break;
    case 2:
        error = 2;
        break;
    case 5:
        error = 0.5;
        break;
    case 6:
        error = 0.25;
        break;
    case 7:
        error = 0.1;
        break;
    case 8:
        error = 0.05;
        break;
    case 10:
        error = 5;
        break;
    case 11:
        error = 10;
        break;
    default:
        printf("�������� �ʽ��ϴ�.\n");
        return 0.0;
    }
    *Resistance_error_value = error;

    return resistance;
}

void fourColorResistance()
{
    int band1, band2, band3, band4;

    printf("���� ������ 4�� �Դϴ�.\n");
    printf("�� �� �� �� �� �� �� �� �� Ȳ �� �� �� û �� �� �� ȸ �� �� �� �� �� �� ��\n");
    printf("��  0 ��  1 ��  2 ��  3 ��  4 ��  5 ��  6 ��  7 ��  8 ��  9 �� 10 �� 11 ��\n\n");

    printf("���� ���� ���ʴ�� �Է��Ͽ� �ּ���: ");
    scanf("%d %d %d %d", &band1, &band2, &band3, &band4);

    double Resistance_error_value = 0.0; // Initialize the error value
    double calculatedResistance   = calculateResistance4Color(band1, band2, band3, band4, &Resistance_error_value);

    printf("���� ���װ�: %.2lf ��, ������ +- %.2lf %%\n", calculatedResistance, Resistance_error_value);
}

void fiveColorResistance()
{
    int band1, band2, band3, band4, band5;

    printf("���� ������ 5�� �Դϴ�.\n");
    printf("�� �� �� �� �� �� �� �� �� Ȳ �� �� �� û �� �� �� ȸ �� �� �� �� �� �� ��\n");
    printf("��  0 ��  1 ��  2 ��  3 ��  4 ��  5 ��  6 ��  7 ��  8 ��  9 �� 10 �� 11 ��\n\n");

    printf("���� ���� ���ʴ�� �Է��Ͽ� �ּ���: ");
    scanf("%d %d %d %d %d", &band1, &band2, &band3, &band4, &band5);

    double Resistance_error_value = 0.0; // Initialize the error value
    double calculatedResistance = calculateResistance5Color(band1, band2, band3, band4,band5 ,&Resistance_error_value);

    printf("���� ���װ�: %.2lf ��, ������ +- %.2lf %%\n", calculatedResistance, Resistance_error_value);
}

int main()
{
    int resistance = 0;

    printf("============================================================\n");
    printf("                      ���� ����\n\n\n\n\n");

    while (1)
    {
        printf("������ ���� ������ �Է��Ͽ� �ּ��� (4 �Ǵ� 5): ");
        scanf("%d", &resistance);

        if (resistance == 4)
            fourColorResistance();
        else if (resistance == 5)
            fiveColorResistance();
        else
            printf("�� ����� 4 �Ǵ� 5�� �츸 ����մϴ�. �ٽ� �Է��Ͽ� �ּ���.\n\n");
    }

    return 0;
}