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

void Excersize_4_8(int solution, int answer)
{
    srand(time(NULL));
    double mass = 8;
    mass = 8 + rand() % (4 + 1) - 2;
    double force = 2;
    force = 2 + rand() % (1 + 1) - 1;
    double time = 6;
    time = 6 + rand() % (3 + 1) - 1;
    double distance = 3;
    distance = 3 + rand() % (2 + 1) - 1;
    double initial_speed = 0;
    double first_time = 0;
    double average_speed = (distance * 2) / (time * time);
    double average_speed2 = force / mass;

    printf("\n\n");
    printf("4-8 \n");
    printf("질량 %6.2lfkg인 물체가 정지상태에서 일정한 힘 %6.2lfN을 받아서\n", mass, force);
    printf("직선 위를 움직인 결과 %6.2lfs동안 이동한 거리가 %6.2lfm이었다.\n\n", time, distance);
    printf("(a) 이 물체의 가속도는 얼마인가?\n\n");
    printf("(b) 물체에 작동한 힘과 질량의 비는 얼마인가?\n");




    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 물체의 가속도는 얼마인가?\n\n");
        printf("관련공식은 s = v0 * t + 1/2 * a * t^2 입니다\n");
        printf("s: 거리, v0: 처음속도, a: 가속도, t: 시간\n\n");
        printf("s       = v0 * t + 1/2 * a * t^2\n");
        printf("%6.2lfm = %6.2lfm/s * %6.2lfs + 1/2 * a * (%6.2lfs)^2 \n\n", distance, initial_speed, time, time);
        printf("a = %6.2lfm * 2 / (%6.2lfs)^2\n", distance, time);
        printf("  =%6.2lfm/s^2\n", average_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("a = %6.2lfm/s^2\n", average_speed);
        printf("");
    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 물체에 작동한 힘과 질량의 비는 얼마인가?\n\n");
        printf("관련공식은 ΣF = m * a 입니다\n");
        printf("ΣF: 알짜힘, m: 질량, a: 가속도\n\n");
        printf("ΣF = m * a\n\n");
        printf("a       = ΣF / m\n");
        printf("        = %6.2lfN / %6.2lfkg\n\n", force, mass);
        printf("ΣF : m = %6.2lfN : %6.2lfkg\n", force, mass);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("ΣF : m = %6.2lf : %6.2lf\n\n", force, mass);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_4_12(int solution, int answer)
{
    srand(time(NULL));
    double b_1 = 2.50 + rand() % (3 + 1) - 1;
    double m;
    double a;
    double g = 9.80;
    double F = 30.0 + rand() % (5 + 1);
    double t = 2.00 + rand() % (3 + 1);
    double v0 = 0;
    double v0t = 0;
    double delta_distance;
    double m_2;

    printf("\n\n");
    printf("4-12 \n");
    printf("어떤 사람이 상자를 실은 작은 수레를 끈으로 끌고있는 모습이다. \n");
    printf("상자와 수레(비퀴 포함)의 무게는 %6.2lf * 10^2 N이고, 끄는 힘은 +x방향으로 %6.2lf N이다. \n", b_1, F);
    printf("수레는 정지 상태로부터 움직이고, 마찰력은 없다고 가정한다.\n\n");
    printf("(a) 상자와 수레의 가속도는 얼마인가?\n\n");
    printf("(b) %6.2lf s동안 움직인 거리는 얼마인가?\n\n", t);

    if (solution == SHOW)
    {
        m = (b_1 * (10 * 10) / g);
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("상자와 수레(비퀴 포함)의 무게는 얼마인가?\n\n");
        printf("관련 공식은 W = m * g\n");
        printf("W: 무게, m: 질량, g: 중력가속도\n\n");
        printf("W = m * g\n");
        printf("  = %6.2lf * 10^2 N\n", b_1);
        printf("  = m *%6.2lf m/s^2\n\n", g);
        printf("m = (%6.2lf * 10^2 N) / %6.2lf m/s^2\n", b_1, g);
        printf("  = %6.2lf kg\n\n", m);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("m = %6.2lf kg\n\n", m);
    }
    if (solution == SHOW)
    {
        a = F / m;
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 상자와 수레의 가속도는 얼마인가?\n\n");
        printf("관련 공식은 ΣF = m * a\n");
        printf("ΣF: 알짜 힘, m: 질량, a: 가속도\n\n");
        printf("ΣF = m * a\n");
        printf("    = %6.2lf N\n\n", F);
        printf("a = %6.2lf N / %6.2lf kg\n", F, m);
        printf("  = %6.2lf m/s^2\n\n", a);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("a = %6.2lf m/s^2\n\n", a);
    }
    if (solution == SHOW)
    {
        delta_distance = a * 0.5 * (t * t);
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) %6.2lf s동안 움직인 거리는 얼마인가?\n\n", t);
        printf("관련 공식은 Δx = v0 * t + 1/2 * a * t^2\n");
        printf("a: 가속도, v0: 초기속도, t: 시간\n");
        printf("Δx = x - x0, x : 나중거리, x0: 초기거리\n\n");
        printf("Δx = v0 * t + 1/2 * a * t^2\n");
        printf("    = (%6.2lf m/s * %6.2lf s) + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0, t, a, t);
        printf("    = %6.2lf m + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0t, a, t);
        printf("    = %6.2lf m\n\n", delta_distance);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("Δx = %6.2lf m\n\n", delta_distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
void Excersize_4_14(int solution, int answer)
{
    srand(time(NULL));

    double N = 1000 + rand() % (100 + 1) - 50;          
    double μ = 0.5 + (rand() % (10 + 1) - 1) * 0.08;     
    double Ff = 0;
    double g = 9.80;
    Ff = N * μ;

    printf("\n\n");
    printf("4-14 \n");
    printf("수평한 마루 위에 놓인 무게가 %6.2lfN인 상자에 그림 P4-14와 같이\n 수평방향으로 300N의 힘을 가했다. 마루와 상자 사이의 정지마찰\n계수가 %6.2lf일때, 이 상자에 작용하는 마찰력은 얼마인가?", N, μ);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("상자에 작용하는 마찰력은 얼마인가?\n\n");
        printf("관련 공식은 Ff = μ * N\n");
        printf("Ff :마찰력, μ :마찰 계수, N :수직항력\n\n");
        printf("수직항력 N = m * g = %6.2lfN 입니다.\n\n", N);
        printf("Ff = μ * N\n");
        printf("   = %6.2lfN *%6.2lf\n", μ, N);
        printf("   = %6.2lfN\n\n", Ff);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("Ff = %6.2lfN\n\n", Ff);
        printf("=================================================================\n\n");
    }
}
void Excersize_4_16(int solution, int answer)
{
    srand(time(NULL));
    double mass = 20;
    mass = 20 + rand() % (10 + 1) - 5;
    double coefficient_of_kinetic_friction = 0.3;
    coefficient_of_kinetic_friction = 0.3 + rand() % (1 + 1) - 0.2;
    double coefficient_of_kinetic_friction2 = 0;
    double acceleration_of_gravity = 9.8;
    double average_speed = 0;
    double horizontal_force = coefficient_of_kinetic_friction * mass * acceleration_of_gravity;
    double horizontal_force2 = coefficient_of_kinetic_friction2 * mass * acceleration_of_gravity;

    printf("\n\n");
    printf("4-16 \n");
    printf("(a) %6.2lfkg의 나무 상자와 마룻바닥 사이의 운동마찰계수가\n", mass);
    printf("%6.2lf이라면, 나무 상자를 일정한 속력으로 움직이는데 필요\n", coefficient_of_kinetic_friction);
    printf("한 수평력은 얼마인가?\n\n");
    printf("(b) 만일 μk가 0이라면 수평력은 얼마인가?\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a)일정한 속력으로 움직이는데 필요한 수평력은 얼마인가?\n\n");
        printf("관련공식은 Ff = μk * N 입니다\n");
        printf("Ff: 마찰력, μk: 운동마찰계수, N: 수직항력\n\n");
        printf("N = m * g\n");
        printf("m:질량, g:중력가속도\n\n");
        printf("Ff  = μk * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction, mass, acceleration_of_gravity);
        printf("    =%6.2lfN\n\n", horizontal_force);
        printf("일정한 속도로 가기 때문에 a = 0입니다.\n\n");
        printf("ΣF = F - Ff = m * a \n");
        printf("ΣF: 알짜힘, F: 힘, Ff: 마찰력, m: 질량, a: 가속도\n\n");
        printf("F - Ff       =     m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force, mass, average_speed);
        printf("F = %6.2lfN ", horizontal_force);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("F = %6.2lfN\n", horizontal_force);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 만일 μk가 0이라면 수평력은 얼마인가?\n\n");
        printf("관련공식은 Ff = μk * N 입니다\n");
        printf("Ff: 마찰력, μk: 운동마찰계수, N: 수직항력\n\n");
        printf("N = m * g\n");
        printf("m: 질량, g: 중력가속도\n\n");
        printf("Ff  = μk * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction2, mass, acceleration_of_gravity);
        printf("    = %6.2lfN\n\n", horizontal_force2);
        printf("일정한 속도로 가기 때문에 a = 0입니다.\n\n");
        printf("ΣF = F - Ff = m * a\n");
        printf("ΣF: 알짜힘, F: 힘, Ff: 마찰력, m: 질량, a: 가속도\n\n");
        printf("F - Ff       =    m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force2, mass, average_speed);
        printf("             =  %6.2lfN ", horizontal_force2);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("F = %6.2lfN\n\n", horizontal_force2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
if (solution == SHOW)
{
    printf("\n");
    printf("=========================   풀 이   =============================\n\n");
    printf("새집의 무게가 %6.2lfN 이라면 각 줄에 작용하는 장력 T^1, T^2, T^3 을 구하라. \n\n", T3);

    printf("관력공식은 뉴턴의 제 2법칙\n");
    printf("∑Fx: 수평성분의 알짜의 힘, ∑Fy:수직성분의 알짜의 힘, T: 장력, cos(θ): 변위, sin(θ): 변위, a: 가속도, m * g: 질량의 무게 \n\n");

    printf("줄과 T1의 사잇각은 %6.2lf° 입니다.\n\n", angle1);

    printf("물체가 정지해있기 위해서는 (∑Fx, ∑Fy, a) = 0입니다.\n");
    printf("중력가속도는 아래 방향 이므로  -9.8m/s^2 입니다.\n\n");

    printf("w = m * g\n");
    printf("  = m * 9.8m/s^2\n");
    printf("  = %6.2lfN\n\n", T3);

    printf("m = %6.2lfN / 9.8m/s^2\n", T3);
    m = T3 / 9.8;
    printf("  = %6.2lfkg\n\n", m);

    printf("∑F = m * a\n");
    printf("   = m * 0\n");
    printf("   = 0\n\n");

    printf(" ∑Fx = T1 * sin(θ) - T2 * sin(θ) = m * ax\n");
    printf("     = T1 * sin(θ) - T2 * sin(θ) = m * 0\n");
    printf("     = 0\n\n");

    printf(" T1  = (m * g) * sinθ\n");
    printf("     = %6.2lfN * sin(%6.2lf°)\n", T3, angle1);
    T1 = T3 * sin(DEG2RAD(angle1));
    printf("     = %6.2lfN\n\n", T1);

    printf(" ∑Fy = T1 - (m * g) * cos(θ) = m * ay\n");
    printf("     = T1 - (m * g) * cos(θ) = m * 0\n");
    printf("     = 0\n\n");

    printf("T2 = (m * g) * cos(θ)\n");
    printf("   = T1 * cos(θ)\n");
    printf("   = %6.2lfN * cos(%6.2lf°)\n", T1, angle2);
    T2 = 1.73 * T1;
    printf("   = %6.2lfN\n\n", T2);

    printf("T3는 새집을 잡고있는 줄 이기 때문에 %6.2lfN 입니다.\n\n", T3);
    printf("T3 = %6.2lfN\n\n", T3);


    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("T1 = %6.2lfN\n\n", T1);

        printf("T2 = %6.2lfN\n\n", T2);

        printf("T3 = %6.2lfN\n\n", T3);

        printf("=================================================================\n\n");
    }
}



}

void Excersize_4_26(int solution, int answer)
{
    srand(time(NULL));
    double m = 5 + rand() % (3 + 1) - 1;
    double a = 3 + rand() % (2 + 1);
    double g = 9.8;
    double mg = 0;
    double T = 0;

    printf("\n\n");
    printf("4-26\n");
    printf("질량이 %6.2lfkg인 물체를 줄에 매달아 끌어올리고 있다.  \n", m);
    printf("물체가 가속도 %6.2lfm/s^2으로 위쪽으로 올라가고 있다면 \n", a);
    printf("줄이 물체에 작용하는 힘은 얼마인가?\n\n");

    if (solution == SHOW)
    {
        T = m * a + m * g;
        printf("============================ 풀 이 ============================\n\n");
        printf("이 물체에 작용하는 힘을 구하여라\n\n");
        printf("관련 공식은 ∑F = T - m * g = m * a\n");
        printf("F: 힘, T: 장력, m: 질량, g: 중력가속도, a: 가속도\n\n");
        printf("∑F = T - m * g = m * a\n\n");
        printf("T - m * g = m * a\n");
        printf("T = m * (a + g)\n");
        printf("  = %6.2lfkg * (%6.2lfm/s^2 + %6.2lfm/s^2)\n", m, a, g);
        printf("  = %6.2lfN\n\n", T);
    }
    if (answer == SHOW)
    {
        printf("============================ 정 답 ============================\n\n");
        printf("∑F = %6.2lfN\n\n", T);
        printf("===============================================================\n\n");
    }
}
void Excersize_4_28(int solution, int answer)
{
    srand(time(NULL));
    double brick1_weight = 1.0 + rand() % (1 + 1) - 0.5;
    double brick2_weight = brick1_weight + 1.0 + rand() % (1 + 1) - 0.5;
    double brick3_weight = brick2_weight + 1.0 + rand() % (1 + 1) - 0.5;
    double N = 42 + rand() % ( 21 + 1) - 10;



    printf("\n");
    printf("4-28 \n");
    printf("각 질량 %5.2lf kg, %5.2lf kg, %5.2lf kg 의 세 벽돌이 순서대로\n", brick1_weight, brick2_weight, brick3_weight);
    printf("마찰이 없는 수평 표면 위에 있고\n");
    printf("%5.2lf N 의 힘이 질량 %5.2lf kg 인 벽돌에 작용한다\n\n", N, brick3_weight);

    printf("(a) 이 계의 가속도는 얼마인가?\n\n");
    printf("(b) 질량 %5.2lf kg 과 %5.2lf kg 벽돌을 연결하는 줄에 작용하는 장력은 얼마인가?\n\n", brick3_weight, brick1_weight);
    printf("(c) 질량 %5.2lf kg 인 벽돌이 질량 %5.2lf kg 인 벽돌에 작용하는 힘은 얼마인가?\n\n", brick1_weight, brick2_weight);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 계의 가속도는 얼마인가?\n\n");
        printf("관련 공식은 ∑F = m * a\n");
        printf("∑F: 알짜힘, m: 모든 벽돌의 질량의 총합, a: 가속도\n\n");
        printf("∑F = m * a\n");
        printf("a  = ∑F / m\n");
        printf("   =%5.2lf N / (%5.2lf + %5.2lf + %5.2lf)kg\n", N, brick1_weight, brick2_weight, brick3_weight);
        printf("   =%5.2lf N / %5.2lfkg\n", N, brick1_weight + brick2_weight + brick3_weight);
        printf("   =%5.2lf m/s^2\n\n", N / (brick1_weight + brick2_weight + brick3_weight));
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("a =%5.2lf m/s^2\n", N / (brick1_weight + brick2_weight + brick3_weight));
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 질량 %5.2lf kg 과 %5.2lf kg 벽돌을 연결하는 줄에 작용하는 장력은 얼마인가?\n\n", brick3_weight, brick1_weight);
        printf("관련 공식은 ∑F = m * a\n");
        printf("∑F: 알짜힘, m: 질량, a: 가속도, T: 장력\n\n");
        printf("%5.2lf kg 의 벽돌에서 작용하는 힘 %5.2lf N 를 (+) 방향으로 정합니다.\n\n", brick3_weight, N);
        printf("∑F = m * a\n");
        printf("N - T = m * a\n");
        printf("%5.2lf N - T = m * a\n", N);
        printf("T           = N - ( m * a )\n", N);
        printf("            = %5.2lf N - (%5.2lf kg * %5.2lf m/s^2)\n", N, brick3_weight, N / (brick1_weight + brick2_weight + brick3_weight));
        printf("            = %5.2lf N\n\n", brick3_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("T = %5.2lf N\n", brick3_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 질량 %5.2lf kg 인 벽돌이 질량 %5.2lf kg 인 벽돌에 작용하는 힘은 얼마인가?\n\n", brick1_weight, brick2_weight);
        printf("관련 공식은 ∑F = m * a\n");
        printf("∑F: 알짜힘, m: 질량, a: 가속도, T: 장력\n\n");
        printf("∑F = m * a\n");
        printf("   =%5.2lf kg * %5.2lf m/s^2\n", brick2_weight, N / (brick1_weight + brick2_weight + brick3_weight));
        printf("   =%5.2lf N\n\n", brick2_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("F = %5.2lf N\n\n", brick2_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
        printf("=================================================================\n");
    }
}
void Excersize_4_30(int solution, int answer)
{
    srand(time(NULL));
    double m_Large_airplane = 1950 + rand() % (195 + 1) - 98;         
    double m_small_airplane = 276; +rand() % (28 + 1) - 14;          
    double m = m_Large_airplane + m_small_airplane;                   
    double a = 2.20 + (rand() % (10 + 1) - 1) * 0.05;                
    double ΣF = m * a;                                               
    double T = m_small_airplane * a;                                  
    double g = 0;                                                   

    printf("\n\n");
    printf("4-30 \n");
    printf("그림 P4-30과 같이 질량이 %6.2lfkg의 대형 비행기가 %6.2lfkg인 경비행기를\n활주로에서 수평뱡향으로 a =%6.2lfm/s^2의 가속도로 끌고 가고 있다.\n\n", m_Large_airplane, m_small_airplane, a);
    printf("(a) 대형 비행기의 프로펠러가 추진하는 추진력은 얼마인가?\n\n");
    printf("(b) 대형 비행기와 경비행기를 연결하는 줄의 장력은 얼마인가? 단, 줄\n의 질량은 없고 마찰도 없다고 가정한다.");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 대형 비행기의 프로펠러가 추진하는 추진력은 얼마인가?\n\n");
        printf("관련 공식은 ΣF = m * a\n");
        printf("ΣF :알짜힘의 총합, m :질량, a :가속도 \n\n");
        printf("이때 m은 대형비행기의 질량 %6.2lfkg + 경비행기의 질량 %6.2lfkg = %6.2lfkg\n\n", m_Large_airplane, m_small_airplane, m);
        printf("ΣF = m * a\n");
        printf("    = %6.2lfkg *%6.2lfm/s^2\n", m, a);
        printf("    = %6.2lfN\n\n", ΣF);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("ΣF = %6.2lfN", ΣF);
    }
    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 대형 비행기와 경비행기를 연결하는 줄의 장력은 얼마인가? 단, 줄\n의 질량은 없고 마찰도 없다고 가정한다.\n\n");
        printf("관련 공식은 ΣF = T - m * g = m * a\n");
        printf("ΣF :알짜힘의 총합, T :장력, m :질량, g :중력가속도, a :가속도\n\n");
        printf("이때 m은 경비행기의 질량인 %6.2lfkg 입니다.\n\n", m_small_airplane);
        printf("물체에 작용하는 힘은 장력(T)과 중력(g)입니다. 그러나 수평으로 당길\n때 중력은 수평 방향과는 관련이 없으므로 중력의 영향은 받지 않습니다.\n따라서 g = 0이 되서 F = T 됩니다.\n\n");
        printf("ΣF = T - m * g = m * a\n\n");
        printf("T = m * (a + g)\n");
        printf("  = %6.2lfkg * (%6.2lfm/s^2 +%6.2lfm/s^2)\n", m_small_airplane, a, g);
        printf("  = %6.2lfN\n\n", T);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("T = %6.2lfN\n\n", T);
        printf("=================================================================\n\n");
    }
}

int main(void)
{
    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 4     ========================\n");
    printf("=================================================================\n");

    //Excersize_4_8(Show_Solution, Answer);   //미래모빌리티공학과 한창희
    //Excersize_4_10(Show_Solution, Answer);  //미래모빌리티공학과 홍경서 (미통과)
    //Excersize_4_12(Show_Solution, Answer);  //미래모빌리티공학과 신현서
    //Excersize_4_14(Show_Solution, Answer);  //미래모빌리티공학과 안성호
    //Excersize_4_16(Show_Solution, Answer);  //미래모빌리티공학과 한창희
    //Excersize_4_18(Show_Solution, Answer);  //미래모빌리티공학과 홍경서 (미통과)
    //Excersize_4_24(Show_Solution, Answer);  //미래모빌리티공학과 한석희
    //Excersize_4_26(Show_Solution, Answer);  //미래모빌리티공학과 서형준
    //Excersize_4_28(Show_Solution, Answer);  //미래모빌리티공학과 송의준 
    //Excersize_4_30(Show_Solution, Answer);  //미래모빌리티공학과 안성호

}