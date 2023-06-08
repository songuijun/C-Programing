#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_3_21(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));

    double mass = 7.3; //+rand() % (10 + 1) - 4;
    double angle = 40; // +rand() % (10 + 1) - 2;
    double the_height_of_the_ground = 2.2;
    double the_initial_speed = 14;
    double g = 9.8;
    double t;
    double a;
    double b;
    double c;
    double d;
    double e;

    printf("\n");
    printf("3-21 \n");
    printf("투포환 선수가 포환을 던지기 위해 포환을 가속 시킨다\n");
    printf("만약 질량이 %5.2lf kg인 포환을 수평면에 대해 %5.2lf°의 각을 이루면서\n", mass, angle);
    printf("초속도 %5.2lf m/s로 던졌다고 하자. \n\n", the_initial_speed);
    printf("지면에서 %5.2lf m 높이에서 포환이 선수의 손을 떠났을때, 포환이 날아간 수평거리는 얼마인가?\n", the_height_of_the_ground);


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("관련공식 v0y = v0 * sin(θ)\n");
        printf("v0y: y의 초기 속도, v0: 초기 속도, sinθ: 삼각함수에서 y 성분\n\n");

        printf("v0y = v0 * sin(θ)\n");
        printf("    = %5.2lf m/s * sin (%5.2lf°)\n", the_initial_speed, angle);
        printf("    = %5.2lf m/s\n\n", (the_initial_speed)*sin(DEG2RAD(angle)));
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("v0y = %5.2lf m/s\n\n", (the_initial_speed)*sin(DEG2RAD(angle)));
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("관련공식 y = y0 + v0 * t + 1/2 * a * t^2\n");
        printf("y: 나중 위치, y0: 초기 위치, v0: 초기 속도, t: 시간, a: 가속도\n\n");

        a = 0.5 * (-g);
        b = (the_initial_speed)*sin(DEG2RAD(angle));
        c = the_height_of_the_ground;

        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        t = (-b - e) / (2.0 * a);
        printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -g);


        printf("y   = y0 + v0y * t + 1/2 * a * t^2\n");
        printf("0m  = %5.2lf m + (%5.2lf m/s * t) + ((1/2) * (%5.2lf m/s^2) * t^2)\n\n", the_height_of_the_ground, (the_initial_speed)*sin(DEG2RAD(angle)), -g);
        printf("(%5.2lf m/s^2 * t^2) + (%5.2lf m/s * t) + %5.2lf m = 0\n\n", (-g / 2), (the_initial_speed)*sin(DEG2RAD(angle)), the_height_of_the_ground);
        printf("t   = %5.2lf s, %5.2lf s\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("t = %6.2lf s (t > 0)\n\n", t);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("관련공식 Δx = v0x x t\n");
        printf("Δx: 거리변화량, v0x: x의 초기 속력, t: 시간\n\n");

        printf("Δx  = v0x * t\n");
        printf("    =%5.2lf m/s * %5.2lf s\n", (the_initial_speed)*sin(DEG2RAD(angle)), t);
        printf("    = %5.2lf m\n\n", (the_initial_speed)*sin(DEG2RAD(angle)) * t);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx  = %5.2lf m\n\n", (the_initial_speed)*sin(DEG2RAD(angle)) * t);

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


    Excersize_3_21(1, 1);
}
