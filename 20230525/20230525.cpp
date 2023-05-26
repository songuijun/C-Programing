//학과: 미래모빌리티공학과
//학번: 202315010
//이름: 송의준
//날짜: 20230525


//1번 입니다 :)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	printf("even()의 결과: %d\n", even(n));
	printf("absolute()의 결과: %d\n", absolute(n));
	printf("sign()의 결과: %d\n", sign(n));
	return 0;
}

int even(int n)
{
	return (n % 2 == 0) ? 1 : 0;
}

int absolute(int n)
{
	return (n > 0) ? n : -n;
}

int sign(int n)
{
	return (n > 0) ? 1 : -1;
}
*/
//4번
/*
 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char text) {
	if (text >= 97 && text <= 122) {
		printf("%c는 알파벳 문자입니다.", text);
	}
}
int main(void) {
	char t;
	printf("문자를 입력하시오: ");
	scanf("%c", &t);
	check_alpha(t);
	return 0;
}
*/
//8번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income) {
	if (income > 1000) {
		return (income - 1000) * 0.1 + 1000 * 0.08;
	}
	else {
		return income * 0.08;
	}
}
int main(void) {
	int income;
	printf("소득을 입력하세요(만원): ");
	scanf("%d", &income);
	printf("소득세는 %d입니다", get_tax(income));
	return 0;
}
*/

//10번
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	return rand() % (80 + 1) + 10;
}

int main(void) {
	int num, i;
	srand(time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("%d ", b_rand());
	}
	return 0;
}
*/
//11번
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
	return (rand() % 6) + 1;
}

int main(void) {
	int user_total = 0, computer_total = 0;
	srand(time(NULL));

	for (int i = 0; i < 3; i++) {
		user_total += roll_dice();
		computer_total += roll_dice();
	}
	printf("사용자 주사위= %d\n", user_total);
	printf("컴퓨터 주사위= %d\n", computer_total);

	if (user_total > computer_total) {
		printf("사용자 승리!\n");
	}
	else if (user_total < computer_total) {
		printf("컴퓨터 승리!\n");
	}
	else {
		printf("비겼습니다. !\n");
	}

	return 0;
}
*/
//16번
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int menu(void)
{
	int n;
	printf("********** Welcome to Express ATM **********\n\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
	printf("메뉴를 선택하시오: ");
	scanf("%d", &n);
	return n;
}
void balance()
{

	double a, result;
	printf("잔액을 조회합니다. ");
	result = sin(a);
	printf("잔액은 %lf입니다.\n\n", result);
}

void deposit()
{
	int n;
	printf("입금 금액을 입력하시오: ");
	scanf("%d", &n);
	printf("잔고는 %d원 입니다.\n\n", n);

}



void withdrawal()
{
	double a, result;
	printf("출금 금액을 입력하시오: ");
	scanf("%lf", &a);
	if (a <= 0.0)
		printf("오류\n");
	else {
		result = log10(a);
		printf("잔고는 %lf원 입니다.\n\n", result);
	}
}

int main(void)
{
	while (1) {
		switch (menu()) {
		case 1:
			balance();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdrawal();
			break;
		case 4:
			printf("종료합니다.\n");
			return 0;
		default:
			printf("잘못된 선택입니다.\n");
			break;


		}
	}
}
*/