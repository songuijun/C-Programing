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

	printf("���� 2���� �Է��ֽÿ�: ");
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

	printf("���� 1���� �Է��ֽÿ�: ");
	scanf("%d ", &n);

	i = factorial(n);
	printf("%d", i);
}
*/
/*
int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d �� �Ҽ� �Դϴ�.\n", n);
	}
	else 
	{
		printf("%d �� �Ҽ���  �ƴմϴ�.\n", n);
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

	printf("������ �Է����ּ���: ");
	scanf("%d",&x);

	printf("%d�� %d �Դϴ�. \n", x, factorial(x));
	return 0;
}
*/

int pluse()
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("���ϱ� �Դϴ�\n");
	printf("���� 2���� �Է��Ͽ� �ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d + %d = %d �Դϴ�.", num1, num2, num1 + num2);
	printf("\n");
	return 0;
}

int minus() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("���� �Դϴ�\n");
	printf("���� 2���� �Է��Ͽ� �ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d - %d = %d �Դϴ�.", num1, num2, num1 - num2);
	printf("\n");
	return 0;
}
int multiply() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("���ϱ� �Դϴ�\n");
	printf("���� 2���� �Է��Ͽ� �ּ���: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");
	printf("%d * %d = %d �Դϴ�.", num1, num2, num1 * num2);
	printf("\n");
	return 0;
}
int divide() 
{
	int num1 = 0;
	int num2 = 0;
	printf("\n");
	printf("������ �Դϴ�\n");
	printf("���� 2���� �Է��Ͽ� �ּ���: ");
	scanf("%d %d", &num1, &num2);

	if (num2 != 0) {
		printf("\n");
		printf("%d / %d = %lf �Դϴ�.", num1, num2, (double)num1 / num2);
		printf("\n");
	}
	else {
		printf("\n");
		printf("0���� ���� �� �����ϴ�.\n");
	}
	return 0;
}

int squareRoot() 
{
	int num = 0;
	printf("\n");
	printf("��Ʈ ����� �Դϴ�\n");
	printf("���ڸ� �Է��Ͽ� �ּ���: ");
	scanf("%d", &num);

	if (num >= 0)
	{
		printf("\n");
		printf("��Ʈ(%d) = %lf �Դϴ�.", num, sqrt(num));
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("������ ���� ��Ʈ�� ���ǵ��� �ʽ��ϴ�.\n");
	}
	return 0;
}

int factorial()
{
	int num = 0;
	printf("\n");
	printf("���丮�� ����Դϴ�\n");
	printf("���ڸ� �Է��Ͽ� �ּ���: ");
	scanf("%d", &num);

	if (num >= 0) 
	{
		int result = 1;
		for (int i = 1; i <= num; ++i) 
		{
			result *= i;
		}
		printf("\n");
		printf("%d! = %d �Դϴ�.", num, result);
		printf("\n");
	}
	else 
	{
		printf("\n");
		printf("������ ���� ���丮���� ���ǵ��� �ʽ��ϴ�.\n");
	}
	return 0;
}

int sine()
{
	double a, result;
	printf("\n");
	printf("���� ����Դϴ�\n");
	printf("������ �Է��Ͻÿ�: ");
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
		printf("�߸��� �����Դϴ�. �ٽ� ������ �ּ���.\n");
	}
	return 1;
}

int printMenu()
{
	printf("\n");
	printf("0) ���� \n");
	printf("1) ���ϱ� \n");
	printf("2) ���� \n");
	printf("3) ���ϱ� \n");
	printf("4) ������ \n");
	printf("5) ��Ʈ \n");
	printf("6) ���丮�� \n");
	printf("7) ���� \n");
	return 1;
}

int main()
{
	int num = 0;
	int re_num = 1;

	printf("���� �Դϴ�. ������ ���� ���Ͻô� ��带 �����Ͽ� �ּ���.\n");
	while (re_num)
	{
		printMenu();
		printf("���Ͻô� ��带 �Է��Ͽ� �ּ���: ");
		scanf("%d", &num);
		re_num = menu(num);
	}
	printf("�̿��� �ּż� �����մϴ�.");
	return 0;
}