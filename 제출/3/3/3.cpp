/*
20230424
미래모빌리티공학과
송의준 
202315010
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int b, x, y, z, n;
    printf("구하실 항의 갯수를 입력하여 주세요:");
    scanf("%d", &n);
    x = 0; y = 1;
    printf("%d %d ", x, y);
    for (b = 0; b <= n - 2; b++)
    {
        z = x + y;
        x = y;
        y = z;
        printf("%d ", z);
    }
    return 0;
}
