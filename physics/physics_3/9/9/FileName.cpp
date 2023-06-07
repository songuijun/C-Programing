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

void Excersize_3_9(int solution, int answer)
{
    srand(time(NULL));
    double speed = 41.0; //+rand() % (10 + 1) - 4;
    double angle = 60; // +rand() % (10 + 1) - 2;
    double Changed_Speed= 25.0;
    double First_hour = 3;
    double Later_hour = 4.50;


    printf("\n");
    printf("3-9 \n");
    printf("���ֵ��� ��ǳ�� �������� �ִ�.\n");
    printf("�ӵ��� %5.2lf km/h �� ��ǳ�� ���� ������ %5.2lf �� �������� ����� ��������.\n", speed, angle);
    printf("3�ð� �� �� ��ǳ�� ������ �������� %5.2lf km/h �� ���� �ӵ��� �ٲ����. \n\n", Changed_Speed);
    printf("���ֵ��� ���� ��ǳ�� %5.2lf h �Ŀ��� ���ֵ����� �󸶳� �ָ� ������?\n", Later_hour);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
       

        printf("%5.2lf h �� ��ǳ�� �Ÿ�\n\n", Later_hour);

        printf("���� ������ d = s * t\n");
        printf("d: �Ÿ� s: �ӵ� t: �ð� cos: ��ġ sin: ����\n\n");
        printf("�ϼ��� �̵��Ÿ�\n");
        printf("�ϼ��� ����: %5.2lf km/h * %5.2lf h = %5.2lf km/h\n",speed, First_hour,speed* First_hour);
        printf("x1 : r cos�� = %5.2lf km/h cos %5.2lf �� = %5.2lf km\n", speed * First_hour, angle,(speed * First_hour) * cos(DEG2RAD(angle)));
        printf("y1 : r sin�� = %5.2lf km/h sin %5.2lf �� = %5.2lf km\n\n", speed * First_hour, angle,(speed * First_hour) * sin(DEG2RAD(angle)));
        
        
        printf("���� �̵��Ÿ�\n");
        printf("x2 : 0 km\n");
        printf("y2 : %5.2lf km/h * %5.2lf h = %5.2lf km \n\n", Changed_Speed, Later_hour, Changed_Speed* Later_hour);

        printf("x = x1 + x2\n");
        printf("y = y1 + y2\n");

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");

        printf("x = %5.2lf km\n", ((speed * First_hour) * cos(DEG2RAD(angle)))+0);
        printf("y = %5.2lf km\n",((speed * First_hour) * sin(DEG2RAD(angle)))+ Changed_Speed * Later_hour);
        
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


    Excersize_3_9(1, 1);




}