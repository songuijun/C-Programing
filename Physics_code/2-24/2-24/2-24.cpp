#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_24(int solution, int answer) {
	double initial_velocity = 5; //초기 속도
	double gravitational_acceleration = 9.8;//중력 가속도
	double height = 39.2;//거리
	double x = 0;
	double result = sqrt(x);
	double a = 0.5;

	printf("\n\n");
	printf("2-24 \n");
	printf("%5.2lfm인 건물 10층에서 %5.2lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", height, initial_velocity);
	printf("(a)공이 지면에 떨어지는데 걸리는 시간은 얼마인가?.\n");
	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n");

	if (solution == SHOW)

	{
		printf("\n\n\n");
		printf("==============================풀이==============================\n");
		// your code here;
		x = height / ((1.0 / 2.0) * gravitational_acceleration);

		printf("(a) \n");
		printf("등가속도 운동을 하는 물체의 t시간동안의 이동거리의 식은\n");
		printf("S=x0+v0t+(1/2)at^2\n");
		printf("다음식에 숫자를 대입하면\n");
		printf("%5.2lf m = 0 + 0t + (1/2) %5.2lf m/s^2 t^2\n", height, gravitational_acceleration);
		printf("t를 구하기 위해 다음식을 바꿔줍니다.\n");
		printf("t = sqrt(%5.2lf)\n", x);

		printf("(b) \n");
		printf("물체의 등속운동 거리 공식 'x = x0 + v0t'을 사용하여, 공의 수평 이동거리를 구한다.");
		printf("여기서 x0는 초기 위치이며, v0는 초기속도,t는 떨어지는데 걸린 시간이다.\n");
		printf("다음식에 숫자를 대입하면\n");
		printf("x = 0 + %5.2lf m\n", initial_velocity * sqrt(x));

		
		printf("=================================================================\n");
		printf("\n\n\n");

	}
	if(answer == SHOW){
		printf("==============================정답==============================\n");
		printf("(a)공이 지면에 떨어지는데 걸리는 시간은 얼마인가?.\n");
		printf("수직으로 떨어지는 시간은 %5.2lf sec입니다.\n", sqrt(x));

		printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n");
		printf("수평으로 %5.2lf m로 이동 합니다.\n", initial_velocity * sqrt(x));

		printf("\n\n\n");
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


	Excersize_2_24(Show_Solution, Answer);


}