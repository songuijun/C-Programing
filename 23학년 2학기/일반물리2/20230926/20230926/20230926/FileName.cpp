#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float V, R1, R2, R3, R4;
    float VB, VC;

    printf("전압(V)을 입력하세요: ");
    scanf("%f", &V);
    
    printf("R1 값을 입력하세요: ");
    scanf("%f", &R1);
    
    printf("R2 값을 입력하세요: ");
    scanf("%f", &R2);
    
    printf("R3 값을 입력하세요: ");
    scanf("%f", &R3);

    printf("R4 값을 입력하세요: ");
    scanf("%f", &R4);

    VB = V * (R2 / (R1 + R2));
    VC = V * (R4 / (R3 + R4));

    printf("VB = %.2f\n", VB);
    printf("VC = %.2f\n", VC);

    return 0;
}