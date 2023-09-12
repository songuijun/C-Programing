#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX_RESISTORS 10
double resistors[MAX_RESISTORS] = { 0.0, };  // �ʱ�ȭ

int choice = 0;

double series()
{
    int numResistors;

    do
    {
        printf("�߰� ���ױ� ���� �Է� (�ִ� %d��, �ּ� 2��): ", MAX_RESISTORS);
        scanf("%d", &numResistors);

        if (numResistors < 2 || numResistors > MAX_RESISTORS)
        {
            printf("��ȿ���� ���� ����. 2���� %d ������ ���� �Է��ϼ���.\n", MAX_RESISTORS);
        }
    } while (numResistors < 2 || numResistors > MAX_RESISTORS);

    printf("%d���� �߰� ���ױ� ���� �Է��ϼ���:\n", numResistors);

    for (int i = 0; i < numResistors; i++)
    {
        printf("���� %d ��: ", i + 1);
        scanf("%lf", &resistors[i]);
    }

    double totalResistance = 0.0;

    for (int i = 0; i < numResistors; i++)
    {
        totalResistance += resistors[i];
    }

    printf("���� ���� ��: %.2lf ohms\n", totalResistance);

    return totalResistance;
}

double parallel()
{
    int numResistors;

    do
    {
        printf("�߰� ���ױ� ���� �Է� (�ִ� %d��, �ּ� 2��): ", MAX_RESISTORS);
        scanf("%d", &numResistors);

        if (numResistors < 2 || numResistors > MAX_RESISTORS)
        {
            printf("��ȿ���� ���� ����. 2���� %d ������ ���� �Է��ϼ���.\n", MAX_RESISTORS);
        }
    } while (numResistors < 2 || numResistors > MAX_RESISTORS);

    printf("%d���� �߰� ���ױ� ���� �Է��ϼ���:\n", numResistors);

    for (int i = 0; i < numResistors; i++)
    {
        printf("���� %d ��: ", i + 1);
        scanf("%lf", &resistors[i]);
    }

    double totalResistance = 0.0;
    for (int i = 0; i < numResistors; i++)
    {
        totalResistance += 1.0 / resistors[i];
    }
    totalResistance = 1.0 / totalResistance;

    printf("���� ���� ��: %.2lf ohms\n", totalResistance);

    return totalResistance;
}

int main(void)
{
    int sele;
    while (1)
    {
        printf("���İ� ���� �� �����ϼ���:\n");
        printf("1. ���� ����\n");
        printf("2. ���� ����\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("���� ���� ���� ����.\n");
            series();
            break;
        }
        else if (choice == 2)
        {
            printf("���� ���� ���� ����.\n");
            parallel();
            break;
        }
        else
        {
            printf("\n��ȿ���� ���� ���Դϴ�. �ٽ� �������ּ���.\n\n");
        }
    }
    return 0;
}
