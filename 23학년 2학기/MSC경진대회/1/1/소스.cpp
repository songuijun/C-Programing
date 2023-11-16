#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_21(int solution, int answer)
{
    //srand(time(NULL));

    double Ax = 3.00  + (rand() % 15)  + 1;
    double Ay = 45.0  + (rand() % 180) + 1;
    double Bx = 6.00  + (rand() % 15)  + 1;
    double By = -60.0 + (rand() % 180) + 1;
    double x1, x2, y1, y2;
    double distance;

    x1 = Ax * cos(Ay);
    y1 = Ax * sin(Ay);
    x2 = Bx * cos(By);
    y2 = Bx * sin(By);

    double c = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("\n\n");
    printf("2 - 21\n");
    printf("����ǥ�迡�� (r, ��) = (3.00m, 45.0��)�� (6.00m, -60.0��)�̴�.\n");
    printf("�� �� ������ �Ÿ��� ���϶�.\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(r, ��) = ( r cos �� , r sin �� )\n");
        printf("      a = ( %.2lf cos ( %.2lf ), %.2lf sin ( %.2lf ) )\n", Ax, Ay, Ax, Ay);
        printf("      b = ( %.2lf cos ( %.2lf ), %.2lf sin ( %.2lf ) )\n", Bx, By, Bx, By);
        
        printf("      c = ��( ( %.2lf cos ( %.2lf )) - ( %.2lf cos ( %.2lf )) )^2 + ( ( %.2lf sin ( %.2lf )) - ( %.2lf sin ( %.2lf )) )\n", Ax, Ay, Bx, By, Ax, Ay, Bx, By);
        printf("        = %.2lf \n", c);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("      c = %.2lf \n", c);
    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_2_21(1, 1);
}