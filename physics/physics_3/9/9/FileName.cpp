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
    printf("제주도에 태풍이 지나가고 있다.\n");
    printf("속도가 %5.2lf km/h 인 태풍의 눈이 서북쪽 %5.2lf ° 방향으로 통과해 지나간다.\n", speed, angle);
    printf("3시간 후 이 태풍의 방향이 북쪽으로 %5.2lf km/h 의 느린 속도로 바뀌었다. \n\n", Changed_Speed);
    printf("제주도를 지난 태풍은 %5.2lf h 후에는 제주도에서 얼마나 멀리 갔을까?\n", Later_hour);

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
       

        printf("%5.2lf h 후 태풍의 거리\n\n", Later_hour);

        printf("관련 공식은 d = s * t\n");
        printf("d: 거리 s: 속도 t: 시간 cos: 위치 sin: 방향\n\n");
        printf("북서쪽 이동거리\n");
        printf("북서쪽 변위: %5.2lf km/h * %5.2lf h = %5.2lf km/h\n",speed, First_hour,speed* First_hour);
        printf("x1 : r cosθ = %5.2lf km/h cos %5.2lf ° = %5.2lf km\n", speed * First_hour, angle,(speed * First_hour) * cos(DEG2RAD(angle)));
        printf("y1 : r sinθ = %5.2lf km/h sin %5.2lf ° = %5.2lf km\n\n", speed * First_hour, angle,(speed * First_hour) * sin(DEG2RAD(angle)));
        
        
        printf("북쪽 이동거리\n");
        printf("x2 : 0 km\n");
        printf("y2 : %5.2lf km/h * %5.2lf h = %5.2lf km \n\n", Changed_Speed, Later_hour, Changed_Speed* Later_hour);

        printf("x = x1 + x2\n");
        printf("y = y1 + y2\n");

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

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