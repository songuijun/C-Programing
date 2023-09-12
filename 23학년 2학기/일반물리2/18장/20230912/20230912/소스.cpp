#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX_RESISTORS 10
double resistors[MAX_RESISTORS] = { 0.0, };  // 초기화

int choice = 0;

double series()
{
    int numResistors;

    do
    {
        printf("추가 저항기 개수 입력 (최대 %d개, 최소 2개): ", MAX_RESISTORS);
        scanf("%d", &numResistors);

        if (numResistors < 2 || numResistors > MAX_RESISTORS)
        {
            printf("유효하지 않은 개수. 2에서 %d 사이의 값을 입력하세요.\n", MAX_RESISTORS);
        }
    } while (numResistors < 2 || numResistors > MAX_RESISTORS);

    printf("%d개의 추가 저항기 값을 입력하세요:\n", numResistors);

    for (int i = 0; i < numResistors; i++)
    {
        printf("저항 %d 값: ", i + 1);
        scanf("%lf", &resistors[i]);
    }

    double totalResistance = 0.0;

    for (int i = 0; i < numResistors; i++)
    {
        totalResistance += resistors[i];
    }

    printf("직렬 저항 값: %.2lf ohms\n", totalResistance);

    return totalResistance;
}

double parallel()
{
    int numResistors;

    do
    {
        printf("추가 저항기 개수 입력 (최대 %d개, 최소 2개): ", MAX_RESISTORS);
        scanf("%d", &numResistors);

        if (numResistors < 2 || numResistors > MAX_RESISTORS)
        {
            printf("유효하지 않은 개수. 2에서 %d 사이의 값을 입력하세요.\n", MAX_RESISTORS);
        }
    } while (numResistors < 2 || numResistors > MAX_RESISTORS);

    printf("%d개의 추가 저항기 값을 입력하세요:\n", numResistors);

    for (int i = 0; i < numResistors; i++)
    {
        printf("저항 %d 값: ", i + 1);
        scanf("%lf", &resistors[i]);
    }

    double totalResistance = 0.0;
    for (int i = 0; i < numResistors; i++)
    {
        totalResistance += 1.0 / resistors[i];
    }
    totalResistance = 1.0 / totalResistance;

    printf("병렬 저항 값: %.2lf ohms\n", totalResistance);

    return totalResistance;
}

int main(void)
{
    int sele;
    while (1)
    {
        printf("직렬과 병렬 중 선택하세요:\n");
        printf("1. 직렬 저항\n");
        printf("2. 병렬 저항\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("직렬 저항 계산기 실행.\n");
            series();
            break;
        }
        else if (choice == 2)
        {
            printf("병렬 저항 계산기 실행.\n");
            parallel();
            break;
        }
        else
        {
            printf("\n유효하지 않은 값입니다. 다시 선택해주세요.\n\n");
        }
    }
    return 0;
}
