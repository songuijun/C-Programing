//�а�: �̷������Ƽ���а�
//�̸�: ������
//�й�: 202315010
//����: 2023 05 24


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/*
int coin_toss(void);
int main(void) {
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
		if (coin_toss() == 1)
			heads++;
		else
			tails++;

	printf("������ �ո� : %d",heads);
	printf("������ �޸� : %d",tails);
	return 0;
}
int coin_toss(void) {
	int head = rand() % 2;
	return head;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

void disp_car(int car_number, int distance) {
	int i;

	printf("CAR #%d: ", car_number);
	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}

int main(void) {
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));
	for (i = 0; i < 20; i++) {
		system("cls");
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;

		disp_car(1, car1_dist);
		disp_car(2, car2_dist);


		Sleep(1000);
	}
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int menu(void)
{
	int n;
	printf("1.���丮��\n");
	printf("2.����\n");
	printf("3.�α�(base 10)\n");
	printf("4.������\n");
	printf("5.����(nPr)\n");
	printf("6.����(nCr)\n");
	printf("7.����\n");
	printf("�������ּ���: \n");
	scanf("%d", &n);
	return n;

}

void factorial()
{
	long long n, result = 1, i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
		result = result * i;
	printf("��� = %lld\n\n", result);
}
void sine()
{
	double a, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("��� = %lf\n\n", result);

}

void logbase10()
{
	double a, result;
	printf("�Ǽ����� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	if (a <= 0.0)
		printf("����\n");
	else
	{
		result = log10(a);
		printf("��� = %lf\n\n", result);

	}
}

int main(void)
{
	while (1) {
		switch (menu()) {
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			logbase10();
			break;
		case 7:
			printf("�����մϴ�.\n");
			break;
		default:
			printf("�߸��� �����Դϴ�.");
			break;
		}
	}
}