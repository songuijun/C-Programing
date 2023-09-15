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

    printf("정수를 3개 입력해주세요: ");
    scanf("%d %d %d", &a, &b, &c);

    min_max(&a, &b, &c, &min, &max);

    printf("최솟값: %d\n", min);
    printf("최댓값: %d\n", max);

    return 0;
}
