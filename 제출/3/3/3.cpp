/*
20230424
�̷������Ƽ���а�
������ 
202315010
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int b, x, y, z, n;
    printf("���Ͻ� ���� ������ �Է��Ͽ� �ּ���:");
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
