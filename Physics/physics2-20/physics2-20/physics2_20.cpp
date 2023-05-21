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

void Excersize_2_20(int solution, int answer)
{
	double A_car_initial_speed = 24;
	double B_car_initial_speed = 20;

	double A_car_stopping_time = 4;
	double B_car_stopping_time = 5;

	double A_car_magnitude_of_acceleration;
	double B_car_magnitude_of_acceleration;

	double young = 0;
	double v0 = 0;
	
	double t = 0;
	double x = 0;

	printf("\n");
	printf("2-20 \n");
	printf(" %5.2lf m/s �� �޸��� �ڵ��� A �� %6.2lf m/s �� �޸��� �ڵ��� B �� \n", A_car_initial_speed, B_car_initial_speed);
	printf("���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A �� %6.2lf s ���� B �� %6.2lf s ���� �����Ͽ���. \n", A_car_stopping_time, B_car_stopping_time);
	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ΰ�? \n");
	printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� �� ���ΰ�? \n");
	printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ָ����°�? \n");
	printf("(d) �ڵ��� B�� A�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���ΰ�? \n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
		A_car_magnitude_of_acceleration = (v0 - A_car_initial_speed) / A_car_stopping_time;
		B_car_magnitude_of_acceleration = (v0 - B_car_initial_speed) / B_car_stopping_time;

		printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ΰ�? \n\n");

		printf("���� ������ a = ��v / ��t \n");
		printf("a: ���ӵ�, ��v: �ӵ� ��ȭ��, ��t: �ð� ��ȭ��\n");
		printf("\n");

		printf("A car  aA = %6.2lf m/s - %6.2lf m/s / %6.2lf s = %6.2lf m/s^2 \n", young, A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration);
		printf("B car  aB = %6.2lf m/s - %6.2lf m/s / %6.2lf s = %6.2lf m/s^2 \n", young, B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration);

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   �� ��   =============================\n\n");

		printf("�ڵ��� A�� ���ӵ��� ũ��: %6.2lf m/s^2 \n", A_car_magnitude_of_acceleration);
		printf("�ڵ��� B�� ���ӵ��� ũ��; %6.2lf m/s^2 \n", B_car_magnitude_of_acceleration);

		printf("\n");
	}



	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
		printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� �� ���ΰ�? \n\n");
		
		printf("���� ������ v = v0 / at \n");
		printf("v: ���� �ӵ�, v0: ó�� �ӵ�, a: ���ӵ�, t: �ð�\n");
		printf("\n");

		printf("");

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   �� ��   =============================\n\n");
		

		printf("\n");
	}


	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
		

		printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ָ����°�? \n\n");


		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   �� ��   =============================\n\n");



		printf("\n");
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
	
		printf("(d) �ڵ��� B�� A�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���ΰ�? \n\n");



		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   �� ��   =============================\n\n");



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