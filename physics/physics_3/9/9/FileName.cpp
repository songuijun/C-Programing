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
    double speed = 41.0; //+rand() % (20 + 1) - 10;
    double angle = 120.0; //+ rand() % (10 + 1) - 5;
    double Changed_Speed = 25.0;// +rand() % (10 + 1) - 3;
    double First_hour = 3.0;// +rand() % (1 + 1) - 0.5;
    double Later_hour = 4.5;// +rand() % (2 + 1) - 1;
    double x1 = (speed * First_hour) * cos(DEG2RAD(angle));
    double y1 = (speed * First_hour) * sin(DEG2RAD(angle));
    double x2 = 0.0;
    double y2 = Changed_Speed * (Later_hour - First_hour);
    double x = x1 + x2;
    double y = y1 + y2;
    double d = sqrt(pow(x, 2) + pow(y, 2)); 
    double qkdgid = 60;


    printf("\n");
    printf("3-9 \n");
    printf("제주도에 태풍이 지나가고 있다.\n");
    printf("속도가 %5.2lf km/h 인 태풍의 눈이 서북쪽 %5.2lf° 방향으로 통과해 지나간다.\n", speed, angle);
    printf("%5.2lf h 후 이 태풍의 방향이 북쪽으로 %5.2lf km/h 의 느린 속도로 바뀌었다. \n", First_hour,Changed_Speed);
    printf("제주도를 지난 태풍은 %5.2lf h 후에는 제주도에서 얼마나 멀리 갔을까?\n\n", Later_hour);

    printf("(a) 속도가 %5.2lf km/h 인 태풍이 %5.2lf h 동안 이동한 거리\n\n", speed, First_hour);
    printf("(b) 속도가 %5.2lf km/h 로 바뀐 태풍이 %5.2lf h 동안 이동한 거리\n\n", Changed_Speed, Later_hour);
    printf("(c) 태풍이 이동한 총거리\n\n");




    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("(a) 속도가 %5.2lf km/h 인 태풍이 %5.2lf h 동안 이동한 거리\n\n", speed, First_hour);

        printf("관련 공식은 Δx = v * t\n");
        printf("Δx: 거리, v: 속도, t: 시간, cos: 삼각함수에서 x 성분, sin: 삼각함수에서 y 성분\n");
        printf("r: 서북쪽 변위, x1: 태풍의 서북쪽으로 이동한 거리의 x 성분, y1: 태풍의 서북쪽으로 이동한 거리의 y 성분\n\n");

        printf("서북방향 %5.2lf°는 x축(동쪽) 방향 기준으로 180° - %5.2lf° = %5.2lf°입니다.\n\n", qkdgid, qkdgid,angle);
        
        printf("서북쪽 변위: %5.2lf km/h * %5.2lf h = %5.2lf km/h\n\n", speed, First_hour, speed * First_hour);
        
        printf("x1 = r * cos(θ)\n");
        printf("   = %5.2lf km/h * cos (%5.2lf°) \n", speed * First_hour, angle);
        printf("   = %5.2lf km\n\n", x1);

        printf("y1 = r * sin(θ)\n");
        printf("   = %5.2lf km/h * sin (%5.2lf°) \n", speed * First_hour, angle);
        printf("   = %5.2lf km\n\n", y1);
              
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("x1 = %5.2lf km\n\n", x1);
        printf("y1 = %5.2lf km\n", y1);

        
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");


        // your code here
        printf("(b)  속도가 %5.2lf km/h 로 바뀐 태풍이 %5.2lf h 동안 이동한 거리\n\n", Changed_Speed, Later_hour);

        printf("관련 공식은 d = s * t\n");
        printf("d: 거리, s: 속도, t: 시간\n");
        printf("x2: 북쪽으로 이동한 거리, y2: 북쪽으로 이동한 동안의 수평 변위\n\n");
        
        printf("x2 : %5.2lf km\n\n", x2);

        printf("y2 : %5.2lf km/h * %5.2lf h = %5.2lf km \n\n", Changed_Speed, (Later_hour - First_hour), y2);


    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("x2 : %5.2lf km\n\n", x2);

        printf("y2 :  %5.2lf km \n", y2);
       


    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        

        // your code here
        printf("(c)  태풍이 이동한 총거리\n\n");

        printf("d: 변위, y: 수직 변위, x: 수평 변위\n\n");

        printf("x = x1 + x2\n");
        printf("  = %5.2lf km + %5.2lf km\n", (speed * First_hour) * cos(DEG2RAD(angle)), x2);
        printf("  = %5.2lf km\n\n", x);

        printf("y = y1 + y2\n");
        printf("  = %5.2lf km + %5.2lf km\n", (speed * First_hour) * sin(DEG2RAD(angle)), y2);
        printf("  = %5.2lf km\n\n", y);

        printf("d = √(x^2 + y^2) \n");
        printf("  = √((%5.2lf km)^2 + (%5.2lf km)^2)\n", x, y); 
        printf("  = %5.2lf km\n\n", d);
      
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %5.2lf km\n\n", d);

        printf("=================================================================\n");


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
