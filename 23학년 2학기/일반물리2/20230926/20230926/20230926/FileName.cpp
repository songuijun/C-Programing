#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float V, R1, R2, R3, R4;
    float VB, VC;

    printf("����(V)�� �Է��ϼ���: ");
    scanf("%f", &V);
    
    printf("R1 ���� �Է��ϼ���: ");
    scanf("%f", &R1);
    
    printf("R2 ���� �Է��ϼ���: ");
    scanf("%f", &R2);
    
    printf("R3 ���� �Է��ϼ���: ");
    scanf("%f", &R3);

    printf("R4 ���� �Է��ϼ���: ");
    scanf("%f", &R4);

    VB = V * (R2 / (R1 + R2));
    VC = V * (R4 / (R3 + R4));

    printf("VB = %.2f\n", VB);
    printf("VC = %.2f\n", VC);

    return 0;
}