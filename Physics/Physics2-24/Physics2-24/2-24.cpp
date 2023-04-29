#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
	printf("���̰� %5.2lf m�� 10�� ���󿡼� \n", height);
	printf("���� ����������� �ʼӵ� %5.2lf m/s�� ������. \n\n", second_velocity);
	printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�? \n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  Ǯ��  ===================================\n");
		// your code here
		t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration) ) ;
	

		printf("��ӵ� ������� �̿��մϴ�. \n");
		printf("S = x0 + v0 x t + (1/2) x a x t^2 \n");
		printf("���ڿ� ���ڸ� �����մϴ�. \n");
		printf("%5.2lf m = %5.2lf m + %5.2lf sec + 1/2 x %5.2lf m/s^2 x t^2 \n", height ,x0,v0, gravitational_acceleration);
		printf("t = %5.2lf sec \n",t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (answer == SHOW){
		printf("=========================   �� ��   =============================\n");

		printf("t�� ����մϴ�. \n");
		printf("t = %5.2lf sec \n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("==============================  Ǯ��  ===================================\n");
		// your code here
		x = second_velocity * t;

		printf("��� ����� ��ü�� �̵� �Ÿ��� ���ϴ� ������ �̿��մϴ�. \n");
		printf("x = x0 + v0 m/s x t sec \n");
		printf("���ڿ� ���ڸ� �����մϴ�. \n");
		printf("x = %5.2lf + %5.2lf m/s x %5.2lf sec \n", x0, second_velocity , t);
		printf("x = %5.2lf m \n", x );


		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (answer == SHOW) {
		printf("=========================   �� ��   =============================\n");
		printf("x�� ����մϴ�. \n");
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