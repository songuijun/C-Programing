
#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        0


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_24(int solution, int answer){
	int initial_velocity = 5; //초기 속도
	double gravitational_acceleration =9.8;//중력 가속도
	double distance = 39.2;
	double x=0;
	double result = sqrt(x);

	printf("\n\n");
	printf("2-24 \n");
	printf("%2.1fm인 건물 10층에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", distance,initial_velocity);
	printf("(a)공이 지면에 떨어지는데 걸리는 시간은 얼마인가?.\n\n" );
	printf("//(a)는 자유낙하의 시간을 구하는 문제이다.\n\n");

	if (Show_Solution == SHOW)

	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("풀이입니다.\n\n");

		printf("등가속도 운동을 하는 물체의 t시간동안의 이동거리의 식은\n");
		printf("S=x0+v0t+(1/2)at^2\n");

		printf("다음식에 숫자를 대입하면\n");
		printf("%2.1f=0+0+(1/2)%2.1ft^2\n", distance, gravitational_acceleration);
		x = distance / (1 / 2) * gravitational_acceleration;

		printf("t를 구하기 위해 다음식을 바꿔줍니다.\n");
		printf("t=sqrt(%d)\n", x);

		printf("=================================================================\n");
		printf("따라서 수직으로 떨어지는 거리는 %d 입니다."); 

	}

	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n");

	if (Show_Solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("t=d/v0를 기본 식으로 사용한다");
		printf("x=v0*t");//x는 수평이동거리
		printf("이와같은 계산식을 이용하면 건물에서 공이 떨어지는 지점까지의 거리 d는\n");
		printf("d=1/2*g*t^2+h0\n");
		printf("위 공식을 d에대해 풀이를 하면,\n");
		printf("d=v0*t\n");
		printf("d=v0(2*h0/g)\n");
		

		printf("=================================================================\n");
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


	Excersize_2_24(0, 0);


}
