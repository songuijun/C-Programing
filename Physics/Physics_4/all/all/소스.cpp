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
    printf("���� %6.2lfkg�� ��ü�� �������¿��� ������ �� %6.2lfN�� �޾Ƽ�\n", mass, force);
    printf("���� ���� ������ ��� %6.2lfs���� �̵��� �Ÿ��� %6.2lfm�̾���.\n\n", time, distance);
    printf("(a) �� ��ü�� ���ӵ��� ���ΰ�?\n\n");
    printf("(b) ��ü�� �۵��� ���� ������ ��� ���ΰ�?\n");




    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ��ü�� ���ӵ��� ���ΰ�?\n\n");
        printf("���ð����� s = v0 * t + 1/2 * a * t^2 �Դϴ�\n");
        printf("s: �Ÿ�, v0: ó���ӵ�, a: ���ӵ�, t: �ð�\n\n");
        printf("s       = v0 * t + 1/2 * a * t^2\n");
        printf("%6.2lfm = %6.2lfm/s * %6.2lfs + 1/2 * a * (%6.2lfs)^2 \n\n", distance, initial_speed, time, time);
        printf("a = %6.2lfm * 2 / (%6.2lfs)^2\n", distance, time);
        printf("  =%6.2lfm/s^2\n", average_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("a = %6.2lfm/s^2\n", average_speed);
        printf("");
    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ��ü�� �۵��� ���� ������ ��� ���ΰ�?\n\n");
        printf("���ð����� ��F = m * a �Դϴ�\n");
        printf("��F: ��¥��, m: ����, a: ���ӵ�\n\n");
        printf("��F = m * a\n\n");
        printf("a       = ��F / m\n");
        printf("        = %6.2lfN / %6.2lfkg\n\n", force, mass);
        printf("��F : m = %6.2lfN : %6.2lfkg\n", force, mass);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("��F : m = %6.2lf : %6.2lf\n\n", force, mass);
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
    printf("� ����� ���ڸ� ���� ���� ������ ������ �����ִ� ����̴�. \n");
    printf("���ڿ� ����(���� ����)�� ���Դ� %6.2lf * 10^2 N�̰�, ���� ���� +x�������� %6.2lf N�̴�. \n", b_1, F);
    printf("������ ���� ���·κ��� �����̰�, �������� ���ٰ� �����Ѵ�.\n\n");
    printf("(a) ���ڿ� ������ ���ӵ��� ���ΰ�?\n\n");
    printf("(b) %6.2lf s���� ������ �Ÿ��� ���ΰ�?\n\n", t);

    if (solution == SHOW)
    {
        m = (b_1 * (10 * 10) / g);
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("���ڿ� ����(���� ����)�� ���Դ� ���ΰ�?\n\n");
        printf("���� ������ W = m * g\n");
        printf("W: ����, m: ����, g: �߷°��ӵ�\n\n");
        printf("W = m * g\n");
        printf("  = %6.2lf * 10^2 N\n", b_1);
        printf("  = m *%6.2lf m/s^2\n\n", g);
        printf("m = (%6.2lf * 10^2 N) / %6.2lf m/s^2\n", b_1, g);
        printf("  = %6.2lf kg\n\n", m);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("m = %6.2lf kg\n\n", m);
    }
    if (solution == SHOW)
    {
        a = F / m;
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ڿ� ������ ���ӵ��� ���ΰ�?\n\n");
        printf("���� ������ ��F = m * a\n");
        printf("��F: ��¥ ��, m: ����, a: ���ӵ�\n\n");
        printf("��F = m * a\n");
        printf("    = %6.2lf N\n\n", F);
        printf("a = %6.2lf N / %6.2lf kg\n", F, m);
        printf("  = %6.2lf m/s^2\n\n", a);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("a = %6.2lf m/s^2\n\n", a);
    }
    if (solution == SHOW)
    {
        delta_distance = a * 0.5 * (t * t);
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) %6.2lf s���� ������ �Ÿ��� ���ΰ�?\n\n", t);
        printf("���� ������ ��x = v0 * t + 1/2 * a * t^2\n");
        printf("a: ���ӵ�, v0: �ʱ�ӵ�, t: �ð�\n");
        printf("��x = x - x0, x : ���߰Ÿ�, x0: �ʱ�Ÿ�\n\n");
        printf("��x = v0 * t + 1/2 * a * t^2\n");
        printf("    = (%6.2lf m/s * %6.2lf s) + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0, t, a, t);
        printf("    = %6.2lf m + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0t, a, t);
        printf("    = %6.2lf m\n\n", delta_distance);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("��x = %6.2lf m\n\n", delta_distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
void Excersize_4_14(int solution, int answer)
{
    srand(time(NULL));

    double N = 1000 + rand() % (100 + 1) - 50;          
    double �� = 0.5 + (rand() % (10 + 1) - 1) * 0.08;     
    double Ff = 0;
    double g = 9.80;
    Ff = N * ��;

    printf("\n\n");
    printf("4-14 \n");
    printf("������ ���� ���� ���� ���԰� %6.2lfN�� ���ڿ� �׸� P4-14�� ����\n ����������� 300N�� ���� ���ߴ�. ����� ���� ������ ��������\n����� %6.2lf�϶�, �� ���ڿ� �ۿ��ϴ� �������� ���ΰ�?", N, ��);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("���ڿ� �ۿ��ϴ� �������� ���ΰ�?\n\n");
        printf("���� ������ Ff = �� * N\n");
        printf("Ff :������, �� :���� ���, N :�����׷�\n\n");
        printf("�����׷� N = m * g = %6.2lfN �Դϴ�.\n\n", N);
        printf("Ff = �� * N\n");
        printf("   = %6.2lfN *%6.2lf\n", ��, N);
        printf("   = %6.2lfN\n\n", Ff);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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
    printf("(a) %6.2lfkg�� ���� ���ڿ� ����ٴ� ������ ����������\n", mass);
    printf("%6.2lf�̶��, ���� ���ڸ� ������ �ӷ����� �����̴µ� �ʿ�\n", coefficient_of_kinetic_friction);
    printf("�� ������� ���ΰ�?\n\n");
    printf("(b) ���� ��k�� 0�̶�� ������� ���ΰ�?\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a)������ �ӷ����� �����̴µ� �ʿ��� ������� ���ΰ�?\n\n");
        printf("���ð����� Ff = ��k * N �Դϴ�\n");
        printf("Ff: ������, ��k: ��������, N: �����׷�\n\n");
        printf("N = m * g\n");
        printf("m:����, g:�߷°��ӵ�\n\n");
        printf("Ff  = ��k * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction, mass, acceleration_of_gravity);
        printf("    =%6.2lfN\n\n", horizontal_force);
        printf("������ �ӵ��� ���� ������ a = 0�Դϴ�.\n\n");
        printf("��F = F - Ff = m * a \n");
        printf("��F: ��¥��, F: ��, Ff: ������, m: ����, a: ���ӵ�\n\n");
        printf("F - Ff       =     m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force, mass, average_speed);
        printf("F = %6.2lfN ", horizontal_force);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("F = %6.2lfN\n", horizontal_force);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� ��k�� 0�̶�� ������� ���ΰ�?\n\n");
        printf("���ð����� Ff = ��k * N �Դϴ�\n");
        printf("Ff: ������, ��k: ��������, N: �����׷�\n\n");
        printf("N = m * g\n");
        printf("m: ����, g: �߷°��ӵ�\n\n");
        printf("Ff  = ��k * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction2, mass, acceleration_of_gravity);
        printf("    = %6.2lfN\n\n", horizontal_force2);
        printf("������ �ӵ��� ���� ������ a = 0�Դϴ�.\n\n");
        printf("��F = F - Ff = m * a\n");
        printf("��F: ��¥��, F: ��, Ff: ������, m: ����, a: ���ӵ�\n\n");
        printf("F - Ff       =    m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force2, mass, average_speed);
        printf("             =  %6.2lfN ", horizontal_force2);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("F = %6.2lfN\n\n", horizontal_force2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
if (solution == SHOW)
{
    printf("\n");
    printf("=========================   Ǯ ��   =============================\n\n");
    printf("������ ���԰� %6.2lfN �̶�� �� �ٿ� �ۿ��ϴ� ��� T^1, T^2, T^3 �� ���϶�. \n\n", T3);

    printf("���°����� ������ �� 2��Ģ\n");
    printf("��Fx: ���򼺺��� ��¥�� ��, ��Fy:���������� ��¥�� ��, T: ���, cos(��): ����, sin(��): ����, a: ���ӵ�, m * g: ������ ���� \n\n");

    printf("�ٰ� T1�� ���հ��� %6.2lf�� �Դϴ�.\n\n", angle1);

    printf("��ü�� �������ֱ� ���ؼ��� (��Fx, ��Fy, a) = 0�Դϴ�.\n");
    printf("�߷°��ӵ��� �Ʒ� ���� �̹Ƿ�  -9.8m/s^2 �Դϴ�.\n\n");

    printf("w = m * g\n");
    printf("  = m * 9.8m/s^2\n");
    printf("  = %6.2lfN\n\n", T3);

    printf("m = %6.2lfN / 9.8m/s^2\n", T3);
    m = T3 / 9.8;
    printf("  = %6.2lfkg\n\n", m);

    printf("��F = m * a\n");
    printf("   = m * 0\n");
    printf("   = 0\n\n");

    printf(" ��Fx = T1 * sin(��) - T2 * sin(��) = m * ax\n");
    printf("     = T1 * sin(��) - T2 * sin(��) = m * 0\n");
    printf("     = 0\n\n");

    printf(" T1  = (m * g) * sin��\n");
    printf("     = %6.2lfN * sin(%6.2lf��)\n", T3, angle1);
    T1 = T3 * sin(DEG2RAD(angle1));
    printf("     = %6.2lfN\n\n", T1);

    printf(" ��Fy = T1 - (m * g) * cos(��) = m * ay\n");
    printf("     = T1 - (m * g) * cos(��) = m * 0\n");
    printf("     = 0\n\n");

    printf("T2 = (m * g) * cos(��)\n");
    printf("   = T1 * cos(��)\n");
    printf("   = %6.2lfN * cos(%6.2lf��)\n", T1, angle2);
    T2 = 1.73 * T1;
    printf("   = %6.2lfN\n\n", T2);

    printf("T3�� ������ ����ִ� �� �̱� ������ %6.2lfN �Դϴ�.\n\n", T3);
    printf("T3 = %6.2lfN\n\n", T3);


    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

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
    printf("������ %6.2lfkg�� ��ü�� �ٿ� �Ŵ޾� ����ø��� �ִ�.  \n", m);
    printf("��ü�� ���ӵ� %6.2lfm/s^2���� �������� �ö󰡰� �ִٸ� \n", a);
    printf("���� ��ü�� �ۿ��ϴ� ���� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        T = m * a + m * g;
        printf("============================ Ǯ �� ============================\n\n");
        printf("�� ��ü�� �ۿ��ϴ� ���� ���Ͽ���\n\n");
        printf("���� ������ ��F = T - m * g = m * a\n");
        printf("F: ��, T: ���, m: ����, g: �߷°��ӵ�, a: ���ӵ�\n\n");
        printf("��F = T - m * g = m * a\n\n");
        printf("T - m * g = m * a\n");
        printf("T = m * (a + g)\n");
        printf("  = %6.2lfkg * (%6.2lfm/s^2 + %6.2lfm/s^2)\n", m, a, g);
        printf("  = %6.2lfN\n\n", T);
    }
    if (answer == SHOW)
    {
        printf("============================ �� �� ============================\n\n");
        printf("��F = %6.2lfN\n\n", T);
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
    printf("�� ���� %5.2lf kg, %5.2lf kg, %5.2lf kg �� �� ������ �������\n", brick1_weight, brick2_weight, brick3_weight);
    printf("������ ���� ���� ǥ�� ���� �ְ�\n");
    printf("%5.2lf N �� ���� ���� %5.2lf kg �� ������ �ۿ��Ѵ�\n\n", N, brick3_weight);

    printf("(a) �� ���� ���ӵ��� ���ΰ�?\n\n");
    printf("(b) ���� %5.2lf kg �� %5.2lf kg ������ �����ϴ� �ٿ� �ۿ��ϴ� ����� ���ΰ�?\n\n", brick3_weight, brick1_weight);
    printf("(c) ���� %5.2lf kg �� ������ ���� %5.2lf kg �� ������ �ۿ��ϴ� ���� ���ΰ�?\n\n", brick1_weight, brick2_weight);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ���� ���ӵ��� ���ΰ�?\n\n");
        printf("���� ������ ��F = m * a\n");
        printf("��F: ��¥��, m: ��� ������ ������ ����, a: ���ӵ�\n\n");
        printf("��F = m * a\n");
        printf("a  = ��F / m\n");
        printf("   =%5.2lf N / (%5.2lf + %5.2lf + %5.2lf)kg\n", N, brick1_weight, brick2_weight, brick3_weight);
        printf("   =%5.2lf N / %5.2lfkg\n", N, brick1_weight + brick2_weight + brick3_weight);
        printf("   =%5.2lf m/s^2\n\n", N / (brick1_weight + brick2_weight + brick3_weight));
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("a =%5.2lf m/s^2\n", N / (brick1_weight + brick2_weight + brick3_weight));
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� %5.2lf kg �� %5.2lf kg ������ �����ϴ� �ٿ� �ۿ��ϴ� ����� ���ΰ�?\n\n", brick3_weight, brick1_weight);
        printf("���� ������ ��F = m * a\n");
        printf("��F: ��¥��, m: ����, a: ���ӵ�, T: ���\n\n");
        printf("%5.2lf kg �� �������� �ۿ��ϴ� �� %5.2lf N �� (+) �������� ���մϴ�.\n\n", brick3_weight, N);
        printf("��F = m * a\n");
        printf("N - T = m * a\n");
        printf("%5.2lf N - T = m * a\n", N);
        printf("T           = N - ( m * a )\n", N);
        printf("            = %5.2lf N - (%5.2lf kg * %5.2lf m/s^2)\n", N, brick3_weight, N / (brick1_weight + brick2_weight + brick3_weight));
        printf("            = %5.2lf N\n\n", brick3_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("T = %5.2lf N\n", brick3_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) ���� %5.2lf kg �� ������ ���� %5.2lf kg �� ������ �ۿ��ϴ� ���� ���ΰ�?\n\n", brick1_weight, brick2_weight);
        printf("���� ������ ��F = m * a\n");
        printf("��F: ��¥��, m: ����, a: ���ӵ�, T: ���\n\n");
        printf("��F = m * a\n");
        printf("   =%5.2lf kg * %5.2lf m/s^2\n", brick2_weight, N / (brick1_weight + brick2_weight + brick3_weight));
        printf("   =%5.2lf N\n\n", brick2_weight * (N / (brick1_weight + brick2_weight + brick3_weight)));
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
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
    double ��F = m * a;                                               
    double T = m_small_airplane * a;                                  
    double g = 0;                                                   

    printf("\n\n");
    printf("4-30 \n");
    printf("�׸� P4-30�� ���� ������ %6.2lfkg�� ���� ����Ⱑ %6.2lfkg�� �����⸦\nȰ�ַο��� ���������� a =%6.2lfm/s^2�� ���ӵ��� ���� ���� �ִ�.\n\n", m_Large_airplane, m_small_airplane, a);
    printf("(a) ���� ������� �����緯�� �����ϴ� �������� ���ΰ�?\n\n");
    printf("(b) ���� ������ �����⸦ �����ϴ� ���� ����� ���ΰ�? ��, ��\n�� ������ ���� ������ ���ٰ� �����Ѵ�.");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� ������� �����緯�� �����ϴ� �������� ���ΰ�?\n\n");
        printf("���� ������ ��F = m * a\n");
        printf("��F :��¥���� ����, m :����, a :���ӵ� \n\n");
        printf("�̶� m�� ����������� ���� %6.2lfkg + �������� ���� %6.2lfkg = %6.2lfkg\n\n", m_Large_airplane, m_small_airplane, m);
        printf("��F = m * a\n");
        printf("    = %6.2lfkg *%6.2lfm/s^2\n", m, a);
        printf("    = %6.2lfN\n\n", ��F);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("��F = %6.2lfN", ��F);
    }
    if (solution == SHOW)
    {
        printf("\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� ������ �����⸦ �����ϴ� ���� ����� ���ΰ�? ��, ��\n�� ������ ���� ������ ���ٰ� �����Ѵ�.\n\n");
        printf("���� ������ ��F = T - m * g = m * a\n");
        printf("��F :��¥���� ����, T :���, m :����, g :�߷°��ӵ�, a :���ӵ�\n\n");
        printf("�̶� m�� �������� ������ %6.2lfkg �Դϴ�.\n\n", m_small_airplane);
        printf("��ü�� �ۿ��ϴ� ���� ���(T)�� �߷�(g)�Դϴ�. �׷��� �������� ���\n�� �߷��� ���� ������� ������ �����Ƿ� �߷��� ������ ���� �ʽ��ϴ�.\n���� g = 0�� �Ǽ� F = T �˴ϴ�.\n\n");
        printf("��F = T - m * g = m * a\n\n");
        printf("T = m * (a + g)\n");
        printf("  = %6.2lfkg * (%6.2lfm/s^2 +%6.2lfm/s^2)\n", m_small_airplane, a, g);
        printf("  = %6.2lfN\n\n", T);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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

    //Excersize_4_8(Show_Solution, Answer);   //�̷������Ƽ���а� ��â��
    //Excersize_4_10(Show_Solution, Answer);  //�̷������Ƽ���а� ȫ�漭 (�����)
    //Excersize_4_12(Show_Solution, Answer);  //�̷������Ƽ���а� ������
    //Excersize_4_14(Show_Solution, Answer);  //�̷������Ƽ���а� �ȼ�ȣ
    //Excersize_4_16(Show_Solution, Answer);  //�̷������Ƽ���а� ��â��
    //Excersize_4_18(Show_Solution, Answer);  //�̷������Ƽ���а� ȫ�漭 (�����)
    //Excersize_4_24(Show_Solution, Answer);  //�̷������Ƽ���а� �Ѽ���
    //Excersize_4_26(Show_Solution, Answer);  //�̷������Ƽ���а� ������
    //Excersize_4_28(Show_Solution, Answer);  //�̷������Ƽ���а� ������ 
    //Excersize_4_30(Show_Solution, Answer);  //�̷������Ƽ���а� �ȼ�ȣ

}