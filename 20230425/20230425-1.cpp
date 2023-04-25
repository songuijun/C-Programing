#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*
int main(void) {
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다.\n");

	printf("입력된 값은 %d 입니다.\n", number);
	return 0;
}*/
/*
int main(void) {
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("절대값은 %d 입니다\n", number);
	return 0;

}*/
/*
int main(void) {
	int number;
	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("입력된 정수는 짝수입니다.\n");
	else
		printf("입력된 정수는 홀수입니다.\n");

	return 0;
}*/
/*
int main(void) {
	int n, d, result;
	printf("분자와 분모를 입력하시오: ");
	scanf("%d %d", &n, &d);
	if (d == 0) {
		printf("0으로 나눌 수는 없습니다.\n");
	}
	else {
		result = n / d;
		printf("결과는 %d입니다.\n", result);
	}
	return 0;
}*/
/*
int main(void) {
	int year;
	printf("연도를 입력하시오: ");
	scanf("%d", &year);
	if ((yaer % 4 == 0 && year % 1000 != 0) || year % 400)
		printf("%d년은 윤년입니다.\n", year);
	else
		printf("%d년은 윤년이 아닙니다.\n", year);

	return 0;
}*/
/*
int main(void) {
	int score;
	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("학점 A\n");
	else if(score>=80)
		printf("학점 B\n");
	else if (score >= 70)
		printf("학점 C\n");
	else if (score >= 60)
		printf("학점 D\n");
	else
		printf("학점 F\n");
	return 0;
}*/
/*
int main(void) {
	char ch;
	printf("문자를 입력하시오: ");
	ch = getchar();
	if (ch >= 'A' && ch <= 'Z')
		printf("%c는 대문자입니다.\n");
	else if (ch >= 'a' && ch <= 'z')
		printf("%c는 소문자입니다.\n");
	else if (ch >= '0' && ch <= '9')
		printf("%c는 숫자입니다.\n");
	else
		printf("%c는 기타문자입니다.\n", ch);
	return 0;
}*/
/*
int main(void) {
	double a, b, c, dis;
	printf("계수 a,계수 b,계수 c를 차례대로 입력하시오: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0)
		printf("방정식의 근은 %.2f입니다.", -c / b);
	else {
		dis = b * b - 4.0 * a * c;
		if (dis >= 0) {
			printf("방정식의 근은 %.2f입니다.", -b + sqrt(dis));
			printf("방정식의 근은 %.2f입니다.", -b - sqrt(dis));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}
	return 0;
}*/
/*
int main(void) {
	int month, days;
	printf("달을 입력하시오: ");
	scanf("%d", &month);
	switch (month) {
	case 2:
		days = 28;
		break:
	case 4:
	case 6:
	case 11:
		day = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d입니다.\n", month, days);
	return 0;
}*/
/*
int main(void) {
	char op;
	int x, y, result;
	printf("수식을 입력하시오(예: 2+5)>>");
	scanf("%d %c %d", &x, &op, &y);
	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("지원되지 않는 연산자입니다.\n");
		break;
	}
	printf("%d %c %d = %d\n", x, op, y, result);
	return 0;
}*/
/*
int main(void) {
	int i = 1;
loop:
	printf("%d * %d =%d\n", 3, i, 3 * i);
	i++;
		if (i == 10)goto end;
	goto loop;
end:
	return 0;
}*/
