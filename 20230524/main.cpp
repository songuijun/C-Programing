//학과: 미래모빌리티공학과
//이름: 송의준
//학번: 202315010
//날자: 2023 05 24


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

	printf("동전의 앞면 : %d",heads);
	printf("동전의 뒷면 : %d",tails);
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
	printf("1.팩토리얼\n");
	printf("2.싸인\n");
	printf("3.로그(base 10)\n");
	printf("4.제곱근\n");
	printf("5.순열(nPr)\n");
	printf("6.조합(nCr)\n");
	printf("7.종료\n");
	printf("선택해주세요: \n");
	scanf("%d", &n);
	return n;

}

void factorial()
{
	long long n, result = 1, i;
	printf("정수를 입력하시오: ");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
		result = result * i;
	printf("결과 = %lld\n\n", result);
}
void sine()
{
	double a, result;
	printf("각도를 입력하시오: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("결과 = %lf\n\n", result);

}

void logbase10()
{
	double a, result;
	printf("실수값을 입력하시오: ");
	scanf("%lf", &a);
	if (a <= 0.0)
		printf("오류\n");
	else
	{
		result = log10(a);
		printf("결과 = %lf\n\n", result);

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
			printf("종료합니다.\n");
			break;
		default:
			printf("잘못된 선택입니다.");
			break;
		}
	}
}