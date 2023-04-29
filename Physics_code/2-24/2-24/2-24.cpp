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
	double initial_velocity = 5; //�ʱ� �ӵ�
	double gravitational_acceleration = 9.8;//�߷� ���ӵ�
	double height = 39.2;//�Ÿ�
	double x = 0;
	double result = sqrt(x);
	double a = 0.5;

	printf("\n\n");
	printf("2-24 \n");
	printf("%5.2lfm�� �ǹ� 10������ %5.2lf m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", height, initial_velocity);
	printf("(a)���� ���鿡 �������µ� �ɸ��� �ð��� ���ΰ�?.\n");
	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n");

	if (solution == SHOW)

	{
		printf("\n\n\n");
		printf("==============================Ǯ��==============================\n");
		// your code here;
		x = height / ((1.0 / 2.0) * gravitational_acceleration);

		printf("(a) \n");
		printf("��ӵ� ��� �ϴ� ��ü�� t�ð������� �̵��Ÿ��� ����\n");
		printf("S=x0+v0t+(1/2)at^2\n");
		printf("�����Ŀ� ���ڸ� �����ϸ�\n");
		printf("%5.2lf m = 0 + 0t + (1/2) %5.2lf m/s^2 t^2\n", height, gravitational_acceleration);
		printf("t�� ���ϱ� ���� �������� �ٲ��ݴϴ�.\n");
		printf("t = sqrt(%5.2lf)\n", x);

		printf("(b) \n");
		printf("��ü�� ��ӿ �Ÿ� ���� 'x = x0 + v0t'�� ����Ͽ�, ���� ���� �̵��Ÿ��� ���Ѵ�.");
		printf("���⼭ x0�� �ʱ� ��ġ�̸�, v0�� �ʱ�ӵ�,t�� �������µ� �ɸ� �ð��̴�.\n");
		printf("�����Ŀ� ���ڸ� �����ϸ�\n");
		printf("x = 0 + %5.2lf m\n", initial_velocity * sqrt(x));

		
		printf("=================================================================\n");
		printf("\n\n\n");

	}
	if(answer == SHOW){
		printf("==============================����==============================\n");
		printf("(a)���� ���鿡 �������µ� �ɸ��� �ð��� ���ΰ�?.\n");
		printf("�������� �������� �ð��� %5.2lf sec�Դϴ�.\n", sqrt(x));

		printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n");
		printf("�������� %5.2lf m�� �̵� �մϴ�.\n", initial_velocity * sqrt(x));

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