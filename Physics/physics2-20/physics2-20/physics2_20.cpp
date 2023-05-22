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

void Excersize_2_20(int solution, int answer)
{
	srand(time(NULL));
	double A_car_initial_speed = 24 + rand() % (12 + 1) - 6;         //초기 속도
	double B_car_initial_speed = 20 + rand() % (10 + 1) - 5;

	double A_car_stopping_time = 4 + rand() % (2 + 1) - 2;          //정차에 걸린시간
	double B_car_stopping_time = 5 + rand() % (2 + 1) - 1;

	double A_car_magnitude_of_acceleration;  //가속도
	double B_car_magnitude_of_acceleration;

	double young = 0;
	double v0 = 0;

	double t = 0;
	double x = 0;

	printf("\n");
	printf("2-20 \n");
	printf(" %5.2lf m/s 로 달리던 자동차 A 와 %6.2lf m/s 로 달리던 자동차 B 가 \n", A_car_initial_speed, B_car_initial_speed);
	printf("동시에 브레이크를 밟아 일정하게 감속시켜서 자동차 A 는 %6.2lf s 만에 B 는 %6.2lf s 만에 정지하였다. \n", A_car_stopping_time, B_car_stopping_time);
	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마인가? \n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n");
	printf("(d) 자동차 B가 A와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가? \n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		A_car_magnitude_of_acceleration = (v0 - A_car_initial_speed) / A_car_stopping_time;
		B_car_magnitude_of_acceleration = (v0 - B_car_initial_speed) / B_car_stopping_time;

		printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마인가? \n\n");

		printf("관련 공식은 a = Δv / Δt \n");
		printf("a: 가속도, Δv: 속도 변화량, Δt: 시간 변화량\n");
		printf("\n");

		printf("A car  aA = %6.2lf m/s - %6.2lf m/s / %6.2lf s = %6.2lf m/s^2 \n", young, A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration);
		printf("B car  aB = %6.2lf m/s - %6.2lf m/s / %6.2lf s = %6.2lf m/s^2 \n", young, B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration);

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("자동차 A의 가속도의 크기: %6.2lf m/s^2 \n", A_car_magnitude_of_acceleration);
		printf("자동차 B의 가속도의 크기; %6.2lf m/s^2 \n", B_car_magnitude_of_acceleration);

		printf("\n");
	}



	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		t = (A_car_initial_speed - B_car_initial_speed) / 2;

		printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n\n");

		printf("관련 공식은 v = v0 / at \n");
		printf("v: 나중 속도, v0: 처음 속도, a: 가속도, t: 시간\n");
		printf("\n");

		printf("vA = vB = v0 + at\n");
		printf("%6.2lf m/s + (%6.2lf m/s^2) * t = %6.2lf m/s + (%6.2lf m/s^2) * t \n", A_car_initial_speed, A_car_magnitude_of_acceleration, B_car_initial_speed, B_car_magnitude_of_acceleration);
		printf("                              t = %6.2lf s", t);
		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 %6.2lf s 후 입니다.\n ", t);

		printf("\n");
	}


	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here


		printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n\n");

		printf("관련 공식은 x = v0 * t + (1/2) * a * t^2\n");
		printf("x: 거리, v0: 초기 속도 ,t: 시간 , a: 가속도\n");
		printf("\n");

		printf("A car  x = %6.2lf m/s * %6.2lf s  + (1/2) * (%6.2lf m/s^2) * %6.2lf s\n", A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration, A_car_stopping_time);
		printf("B car  x = %6.2lf m/s * %6.2lf s  + (1/2) * (%6.2lf m/s^2) * %6.2lf s\n", B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration, B_car_stopping_time);

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("레이크를 밟은 후 정지할 때까지 자동차가 이동한거리\n");
		printf("A car x = %6.2lf", A_car_initial_speed * A_car_stopping_time + (1/2) * A_car_magnitude_of_acceleration * A_car_stopping_time);
		printf("B car x = %6.2lf", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);

		printf("\n");
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here

		printf("(d) 자동차 B가 A와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가? \n\n");



		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");



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


	Excersize_2_20(1, 1);




}
