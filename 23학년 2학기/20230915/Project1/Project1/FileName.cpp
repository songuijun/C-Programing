#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void min_max(int* a1, int* b1, int* c1, int* min, int* max)
{
    if (*a1 < *b1) 
    {
        if (*a1 < *c1) 
        {
            *min = *a1;
            if (*b1 > *c1)
                *max = *b1;
            else
                *max = *c1;
        }
        else 
        {
            *min = *c1;
            *max = *b1;
        }
    }
    else {
        if (*b1 < *c1) 
        {
            *min = *b1;
            if (*a1 > *c1)
                *max = *a1;
            else
                *max = *c1;
        }
        else 
        {
            *min = *c1;
            *max = *a1;
        }
    }
}
int main()
{
    int a, b, c;
    int min, max;

    printf("������ 3�� �Է����ּ���: ");
    scanf("%d %d %d", &a, &b, &c);

    min_max(&a, &b, &c, &min, &max);

    printf("�ּڰ�: %d\n", min);
    printf("�ִ�: %d\n", max);

    return 0;
}
