#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_24(int solution, int answer)
{
    srand(time(NULL));
    double height = 39.2 + rand() % (10 + 1) - 4;
    double second_velocity = 5 + rand() % (10 + 1) - 2;
    double gravitational_acceleration = 9.8;
    double x0 = 0;
    double v0 = 0;
    double t = 0;
    double x = 0;

    printf("\n");
    printf("2-24 \n");
    printf("높이가 %5.2lf m인 10층 옥상에서 \n", height);
    printf("공을 수평방향으로 초속도 %5.2lf m/s로 던졌다. \n\n", second_velocity);
    printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
    printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration));




        printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

        printf("관련 공식은 x = x0 + v0 * t + (1/2) * a * t^2 \n");
        printf("x: 높이, x0: 이동거리, v0: 초기 속도, a: 가속도, t: 시간, g: 중력 가속도 \n\n");

        printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -gravitational_acceleration);

        printf("x       = x0 + v0 * t + (1/2) * a * t^2\n");
        printf("%5.2lf m = (%5.2lf m) + (%5.2lf m) * t + (1/2) * (-%5.2lf m/s^2) * t^2 \n", x0, -height, v0, gravitational_acceleration);
        printf("%5.2lf m = (1/2) * (-%5.2lf m/s^2) * t^2 \n", height, gravitational_acceleration);
        printf("t^2     = (%5.2lf m - %5.2lf m/s) / ( 1/2 * (%5.2lf m/s^2 ))\n", -height, v0 * t, -gravitational_acceleration);
        printf("        = %5.2lf s \n\n", height / (1.0 / 2.0 * gravitational_acceleration));

        printf("t = √t^2\n");
        printf("  = √%5.2lf s\n", height / (1.0 / 2.0 * gravitational_acceleration));
        printf("  = %5.2lf s\n", t);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("공이 지면에 떨어지는 데 걸리는 시간(t) = %5.2lf s \n\n", t);
    }



    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        x = second_velocity * t;
        printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n\n");

        printf("관련 공식은 x = x0 + v0 * t  \n");
        printf("x: 수평거리, x0: 초기거리, v0: 초기 속도, t: 시간 \n\n");

        printf("x = x0 + v0 * t  \n");
        printf("  = %5.2lf m + %5.2lf m/s * %5.2lf s \n", x0, second_velocity, t);
        printf("  = % 5.2lf m \n", x);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("수평으로 떨어지는 거리(x) = %5.2lf m \n\n", x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }


}
int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");


    Excersize_2_24(1, 1);




}
