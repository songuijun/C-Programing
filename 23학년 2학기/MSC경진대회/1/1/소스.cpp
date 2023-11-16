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
    printf("극좌표계에서 (r, θ) = (3.00m, 45.0°)와 (6.00m, -60.0°)이다.\n");
    printf("두 점 사이의 거리를 구하라.\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(r, θ) = ( r cos θ , r sin θ )\n");
        printf("      a = ( %.2lf cos ( %.2lf ), %.2lf sin ( %.2lf ) )\n", Ax, Ay, Ax, Ay);
        printf("      b = ( %.2lf cos ( %.2lf ), %.2lf sin ( %.2lf ) )\n", Bx, By, Bx, By);
        
        printf("      c = √( ( %.2lf cos ( %.2lf )) - ( %.2lf cos ( %.2lf )) )^2 + ( ( %.2lf sin ( %.2lf )) - ( %.2lf sin ( %.2lf )) )\n", Ax, Ay, Bx, By, Ax, Ay, Bx, By);
        printf("        = %.2lf \n", c);

    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

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