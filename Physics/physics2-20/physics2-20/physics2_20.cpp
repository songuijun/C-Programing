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
	double v = 0; //나중속도

	double t = 0;
	double tb = 0;

	printf("\n");
	printf("2-20\n");
	printf(" %5.2lf m/s 로 달리던 자동차 A 와 %6.2lf m/s 로 달리던 자동차 B 가 동시에 브레이크를 \n", A_car_initial_speed, B_car_initial_speed);
	printf(" 밟아 일정하게 감속시켜서 자동차 A 는 %6.2lf s 만에 B 는 %6.2lf s 만에 정지하였다. \n\n", A_car_stopping_time, B_car_stopping_time);
	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마인가? \n\n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n\n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n\n");
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
		printf("a: 가속도, Δv: 속도 변화량, Δt: 시간 변화량, aA: a자동차의 가속도, aB: B자동차의 가속도\n");
		printf("\n");

		printf("aA = Δv / Δt \n");
		printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, A_car_initial_speed, A_car_stopping_time);
		printf("   = %6.2lf m/s^2\n\n", A_car_magnitude_of_acceleration);

		printf("aB = Δv / Δt \n");
		printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, B_car_initial_speed, B_car_stopping_time);
		printf("   = %6.2lf m/s^2\n\n", B_car_magnitude_of_acceleration);
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("aA = %6.2lf m/s^2 \n\n", A_car_magnitude_of_acceleration);
		printf("aB = %6.2lf m/s^2 \n\n", B_car_magnitude_of_acceleration);

		
	}



	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		t = (A_car_initial_speed - B_car_initial_speed) / 2;

		printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n\n");

		printf("관련 공식은 v = v0 + at \n");
		printf("v: 나중 속도, v0: 처음 속도, a: 가속도, t: 시간, vA: A자동차의 속도, vB: B자동차의 속도\n");
		printf("\n");

		printf("vA = v0 + aAt\n");
		printf("   = %6.2lf m/s + (%6.2lf m/s^2) * t\n\n", A_car_initial_speed, A_car_magnitude_of_acceleration);

		printf("vB = v0 + aBt\n");
		printf("   = %6.2lf m/s + (%6.2lf m/s^2) * t\n\n", B_car_initial_speed, B_car_magnitude_of_acceleration);

		printf("vA = vB\n");
		printf("%6.2lf m/s + (%6.2lf m/s^2) * t = %6.2lf m/s + (%6.2lf m/s^2) * t \n", A_car_initial_speed, A_car_magnitude_of_acceleration, B_car_initial_speed, B_car_magnitude_of_acceleration);
		printf("t = %6.2lf s\n\n", t);
		
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("t = %6.2lf s\n\n", t);


	}


	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here


		printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n\n");

		printf("관련 공식은 x = v0 * t + (1/2) * a * t^2\n");
		printf("x: 거리, v0: 초기 속도 ,t: 시간 , a: 가속도, xA: A자동차가 간 거리, xB: B자동차가 간 거리\n\n");

		printf("xA = v0 * t + (1/2) * aA * t^2\n");
		printf("   = %6.2lf m/s * %6.2lf s  + (1/2) * (%6.2lf m/s^2) * %6.2lf s\n", A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration, A_car_stopping_time);
		printf("   = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

		printf("xB = v0 * t + (1/2) * aB * t^2\n");
		printf("   = % 6.2lf m / s * %6.2lf s + (1 / 2) * (% 6.2lf m / s ^ 2) * %6.2lf s\n", B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration);
		printf("   = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);

		
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");


		printf("xA = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

		printf("xB = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);

		
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		tb = (v - B_car_initial_speed / B_car_magnitude_of_acceleration);

		printf("(d) 자동차 B가 A와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가? \n\n");
		printf("관련 공식은 v = v0 + at \n");
		printf("v: 나중 속도, v0: 처음 속도, a: 가속도, t: 시간\n\n");

		printf("t = (v - v0) / a\n");
		printf("  = (%6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2\n", v, B_car_initial_speed, B_car_magnitude_of_acceleration);
		printf("  = %6.2lf s\n\n", tb);


		
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("t = %6.2lf s\n\n", tb);

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
