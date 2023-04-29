
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
	int initial_velocity = 5; //�ʱ� �ӵ�
	double gravitational_acceleration =9.8;//�߷� ���ӵ�
	double distance = 39.2;
	double x=0;
	double result = sqrt(x);

	printf("\n\n");
	printf("2-24 \n");
	printf("%2.1fm�� �ǹ� 10������ %d m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", distance,initial_velocity);
	printf("(a)���� ���鿡 �������µ� �ɸ��� �ð��� ���ΰ�?.\n\n" );
	printf("//(a)�� ���������� �ð��� ���ϴ� �����̴�.\n\n");

	if (Show_Solution == SHOW)

	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("Ǯ���Դϴ�.\n\n");

		printf("��ӵ� ��� �ϴ� ��ü�� t�ð������� �̵��Ÿ��� ����\n");
		printf("S=x0+v0t+(1/2)at^2\n");

		printf("�����Ŀ� ���ڸ� �����ϸ�\n");
		printf("%2.1f=0+0+(1/2)%2.1ft^2\n", distance, gravitational_acceleration);
		x = distance / (1 / 2) * gravitational_acceleration;

		printf("t�� ���ϱ� ���� �������� �ٲ��ݴϴ�.\n");
		printf("t=sqrt(%d)\n", x);

		printf("=================================================================\n");
		printf("���� �������� �������� �Ÿ��� %d �Դϴ�."); 

	}

	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n");

	if (Show_Solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("t=d/v0�� �⺻ ������ ����Ѵ�");
		printf("x=v0*t");//x�� �����̵��Ÿ�
		printf("�̿Ͱ��� ������ �̿��ϸ� �ǹ����� ���� �������� ���������� �Ÿ� d��\n");
		printf("d=1/2*g*t^2+h0\n");
		printf("�� ������ d������ Ǯ�̸� �ϸ�,\n");
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
