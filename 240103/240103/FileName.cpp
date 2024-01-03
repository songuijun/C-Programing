#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
int max(int x, int y)
{
	if (x > y) 
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int x, y, larger;

	printf("정수 2개를 입력핫시오: ");
	scanf("%d %d ", &x, &y);

	larger = max(x, y);
	printf("%d", larger);
}
*/
/*
int factorial(int n)
{
	int result = 1;

	for(int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int n,i;

	printf("정수 1개를 입력핫시오: ");
	scanf("%d ", &n);

	i = factorial(n);
	printf("%d", i);
}
*/
/*
int get_integer(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
		return n;
}
int is_prime(int n)
{
	int i;
	
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int n;
	n = get_integer();
	if (is_prime(n) == 1)
	{
		printf("%d 는 소수 입니다.\n", n);
	}
	else 
	{
		printf("%d 는 소수가  아닙니다.\n", n);
	}
	return 0;
}
*/
/*
long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}
int main(void)
{
	int x = 0;
	long f;

	printf("정수를 입력해주세요: ");
	scanf("%d",&x);

	printf("%d는 %d 입니다. \n", x, factorial(x));
	return 0;
}
*/

int pluse()
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("더하기 입니다\n");
	printf("숫자 2개를 입력하여 주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d + %d = %d 입니다.", num1, num2, num1 + num2);
	printf("\n");
	return 0;
}

int minus() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("빼기 입니다\n");
	printf("숫자 2개를 입력하여 주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d - %d = %d 입니다.", num1, num2, num1 - num2);
	printf("\n");
	return 0;
}
int multiply() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("곱하기 입니다\n");
	printf("숫자 2개를 입력하여 주세요: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d * %d = %d 입니다.", num1, num2, num1 * num2);
	printf("\n");
	return 0;
}
int divide() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("나누기 입니다\n");
	printf("숫자 2개를 입력하여 주세요: ");
	scanf("%d %d", &num1, &num2);

	if (num2 != 0) {
		printf("\n");
		printf("%d / %d = %lf 입니다.", num1, num2, (double)num1 / num2);
		printf("\n");
	}
	else {
		printf("\n");
		printf("0으로 나눌 수 없습니다.\n");
	}
	return 0;
}

int squareRoot() 
{
	int num = 0;
	printf("\n");
	printf("루트 씌우기 입니다\n");
	printf("숫자를 입력하여 주세요: ");
	scanf("%d", &num);

	if (num >= 0)
	{
		printf("\n");
		printf("루트(%d) = %lf 입니다.", num, sqrt(num));
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("음수에 대한 루트는 정의되지 않습니다.\n");
	}
	return 0;
}

int factorial()
{
	int num = 0;
	printf("\n");
	printf("팩토리얼 계산입니다\n");
	printf("숫자를 입력하여 주세요: ");
	scanf("%d", &num);

	if (num >= 0) 
	{
		int result = 1;
		for (int i = 1; i <= num; ++i) 
		{
			result *= i;
		}
		printf("\n");
		printf("%d! = %d 입니다.", num, result);
		printf("\n");
	}
	else 
	{
		printf("\n");
		printf("음수에 대한 팩토리얼은 정의되지 않습니다.\n");
	}
	return 0;
}

int sine()
{
	double a, result;
	printf("\n");
	printf("사인 계산입니다\n");
	printf("각도를 입력하시오: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("%lf\n", result);
	return 0;
}

int menu(int num)
{
	switch (num)
	{
	case 0:
		return 0;
	case 1:
		pluse();
		break;
	case 2:
		minus();
		break;
	case 3:
		break;
	default:
		printf("잘못된 선택입니다. 다시 선택해 주세요.\n");
	}
	return 1;
}

int printMenu()
{
	printf("\n");
	printf("0) 종료 \n");
	printf("1) 더하기 \n");
	printf("2) 빼기 \n");
	printf("3) 곱하기 \n");
	printf("4) 나누기 \n");
	printf("5) 루트 \n");
	printf("6) 팩토리얼 \n");
	printf("7) 사인 \n");
	return 1;
}

int main()
{
	int num = 0;
	int re_num = 1;

	printf("계산기 입니다. 다음을 보고 원하시는 모드를 선택하여 주세요.\n");
	while (re_num)
	{
		printMenu();
		printf("원하시는 모드를 입력하여 주세요: ");
		scanf("%d", &num);
		re_num = menu(num);
	}
	printf("이용해 주셔서 감사합니다.");
	return 0;
}