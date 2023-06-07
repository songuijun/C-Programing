#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI


void Excersize_3_21(int solution, int answer)
{
    srand(time(NULL));

    double mass = 7.3; //+rand() % (10 + 1) - 4;
    double angle = 40; // +rand() % (10 + 1) - 2;
    double the_height_of_the_ground= 2.2;
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
    printf("����ȯ ������ ��ȯ�� ������ ���� ��ȯ�� ���� ��Ų��\n");
    printf("���� ������ %5.2lf kg�� ��ȯ�� ����鿡 ���� %5.2lf ���� ���� �̷�鼭\n", mass, angle);
    printf("�ʼӵ� %5.2lf m/s�� �����ٰ� ����. \n\n", the_initial_speed);
    printf("���鿡�� %5.2lf m ���̿��� ��ȯ�� ������ ���� ��������, ��ȯ�� ���ư� ����Ÿ��� ���ΰ�?\n", the_height_of_the_ground);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        a = 0.5 * (-g);
        b = (the_initial_speed)*sin(DEG2RAD(angle));
        c = the_height_of_the_ground;


        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        t = (-b - e) / (2.0 * a);
    




  
        

        printf("��ȯ�� ���ư� ����Ÿ��� ���ΰ�?\n\n");

        printf("�����\n");
        printf("���ð����� V0y = V0 * sin��\n");
        printf("V0y:  �ʱ� y �ӵ� V0: �ʱ� �ӵ� sin��: ��ġ/����\n");
        printf("           V0y = %5.2lf m/s * sin %5.2lf ��= %5.2lf m/s\n\n", the_initial_speed, angle, (the_initial_speed) * sin(DEG2RAD(angle)));
        printf("y  = y0 * V0yt + (1/2) * a * t^2\n");
        printf("0m = %5.2lf m * %5.2lf * t - (1/2) * %5.2lf m/s^2* t^2\n", the_height_of_the_ground, (the_initial_speed)*sin(DEG2RAD(angle)),g);
        printf("at^2 + bt + c = 0\n\n");
        printf("t = %5.2lf s or %5.2lf s\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));

        printf("����\n");
        printf("���ð����� ��x = V0 * x * t\n");
        printf("              = %5.2lf m/s * %5.2lf s\n", (the_initial_speed)*sin(DEG2RAD(angle)),t);
        printf("              = %5.2lf m/s\n", (the_initial_speed)*sin(DEG2RAD(angle))*t);






       

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("��x = %5.2lf m/s\n", (the_initial_speed)*sin(DEG2RAD(angle)) * t);
        
    }

}
int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");


    Excersize_3_21(1, 1);




}