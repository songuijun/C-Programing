//�а�: �̷������Ƽ���а�
//�й�: 202315010
//�̸�: ������
//��¥: 20230525


//1�� �Դϴ� :)
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("even()�� ���: %d\n", even(n));
	printf("absolute()�� ���: %d\n", absolute(n));
	printf("sign()�� ���: %d\n", sign(n));
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
//4��
/*
 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char text) {
	if (text >= 97 && text <= 122) {
		printf("%c�� ���ĺ� �����Դϴ�.", text);
	}
}
int main(void) {
	char t;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &t);
	check_alpha(t);
	return 0;
}
*/
//8��
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
	printf("�ҵ��� �Է��ϼ���(����): ");
	scanf("%d", &income);
	printf("�ҵ漼�� %d�Դϴ�", get_tax(income));
	return 0;
}
*/

//10��
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
//11��
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
	printf("����� �ֻ���= %d\n", user_total);
	printf("��ǻ�� �ֻ���= %d\n", computer_total);

	if (user_total > computer_total) {
		printf("����� �¸�!\n");
	}
	else if (user_total < computer_total) {
		printf("��ǻ�� �¸�!\n");
	}
	else {
		printf("�����ϴ�. !\n");
	}

	return 0;
}
*/
//16��
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int menu(void)
{
	int n;
	printf("********** Welcome to Express ATM **********\n\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
	printf("�޴��� �����Ͻÿ�: ");
	scanf("%d", &n);
	return n;
}
void balance()
{

	double a, result;
	printf("�ܾ��� ��ȸ�մϴ�. ");
	result = sin(a);
	printf("�ܾ��� %lf�Դϴ�.\n\n", result);
}

void deposit()
{
	int n;
	printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("�ܰ�� %d�� �Դϴ�.\n\n", n);

}



void withdrawal()
{
	double a, result;
	printf("��� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	if (a <= 0.0)
		printf("����\n");
	else {
		result = log10(a);
		printf("�ܰ�� %lf�� �Դϴ�.\n\n", result);
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
			printf("�����մϴ�.\n");
			return 0;
		default:
			printf("�߸��� �����Դϴ�.\n");
			break;


		}
	}
}
*/