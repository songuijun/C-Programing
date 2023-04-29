#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;
	double gravitational_acceleration = 9.8;
	double x0 = 0;
	double v0 = 0;
	double t = 0;
	double x = 0;

	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %5.2lf m인 10층 옥상에서 \n", height);
	printf("공을 수평방향으로 초속도 %5.2lf m/s로 던졌다. \n\n", second_velocity);
	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가? \n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  풀이  ===================================\n");
		// your code here
		t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration) ) ;
	

		printf("등가속도 운동공식을 이용합니다. \n");
		printf("S = x0 + v0 x t + (1/2) x a x t^2 \n");
		printf("문자에 숫자를 대입합니다. \n");
		printf("%5.2lf m = %5.2lf m + %5.2lf sec + 1/2 x %5.2lf m/s^2 x t^2 \n", height ,x0,v0, gravitational_acceleration);
		printf("t = %5.2lf sec \n",t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (answer == SHOW){
		printf("=========================   정 답   =============================\n");

		printf("t를 계산합니다. \n");
		printf("t = %5.2lf sec \n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  풀이  ===================================\n");
		// your code here
		x = second_velocity * t;

		printf("등속 운동에서 물체의 이동 거리를 구하는 공식을 이용합니다. \n");
		printf("x = x0 + v0 m/s x t sec \n");
		printf("문자에 숫자를 대입합니다. \n");
		printf("x = %5.2lf + %5.2lf m/s x %5.2lf sec \n", x0, second_velocity , t);
		printf("x = %5.2lf m \n", x );


		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n");
		printf("x를 계산합니다. \n");
		printf("x = %5.2lf m \n", x);
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
	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);



}