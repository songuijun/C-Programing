#define _CRT_SECURE_NO_WARNINGS
#define SEED_MONEY 10000000
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*//1��
int main(void) {
	int n;
	int i = 1;
	printf("����ϰ� ������: " );
	scanf("%d", &n);
	while (i <= 9) 
	{
		printf("%d*%d = %d \n",n,i,n*i);
		i++;
	}
	return 0;
}*/
/*//2��
int main(void) {

	int n;

	printf("==================\n");
	printf("      n    n�� ����\n");
	printf("=================\n");

	n = 1;
	while (n <= 10) {
		printf("%5d     %5d\n", n, n * n);
		n++;
	}
	return 0;
}*/
//3��
/*
int main(void) {
	
	int i, sum,n;
	i = 0;
	n = 10;
	sum = 0;
	while (i <= n) {
		sum += i;
		i = i + 2;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n",n,sum);
	return 0;
	

}*/
//4��
/*
int main(void) {
	int i,n,sum;
	i = 0;
	sum=0;
	while (i<5) {
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.",sum);

	return 0;
}*/
//5��°
/*
int main(void) {
	int grade, n;
	double sum, average;
	n = 0;
	sum = 0;
	grade = 0;
	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");
	while (grade >= 0) {
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade;
	n--;
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n");

	return 0;

}*/
//6��
/*
int main(void) {
	int x, y, r;
	printf(" �� ���� ������ �Է��Ͻÿ�(ū��,������):");
	scanf("%d%d", &x, &y);
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�\n",x);
	return 0;
}*/
//7��
/*
int main(void) {
	int halflife;
	double initial;
	double current;
	int years = 0;
	printf("�ݰ��⸦ �Է��Ͻÿ� (��): ");
	scanf("%d", &halflife);
	initial = 100.0;
	current = initial;
	while (current > initial / 10.0) {
		years += halflife;
		current = current / 2.0;
		printf("%d���Ŀ� ���� ��=%f\n",years,current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ��ð�=%d��\n", years);
	return 0;
}*/
//8��
/*
int main(void) {
	int number, sum = 0;
	do {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);
	printf("���ڵ��� ��=%d\n", sum);
	return 0;
}*/
//9��
/*
int main(void) {
	int i = 0;
	do {
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n");
		printf("�ϳ��� �����Ͻÿ�: ");
		scanf("%d", &i);
	} while (i < 1 || i>3);
	printf("���õ� �޴�=%d\n",i);
	return 0;
}*/
//10��
/*
int main(void) {
	srand((unsigned)time(NULL));
	int answer = rand() % 100 + 1;
	int guess;
	int tries=0;
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		if(guess>answer)
			printf("HIGH\n");
		if (guess < answer)
			printf("LOW \n");
	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}*/
//11��
/*
int main(void) {
	int i;
	for (i = 0; i < 5; i++)
		printf("Hellow World!\n");
	return 0;
}*/
//12��
/*
int main(void) {
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += 1;
	printf("1���� 10������ ������ ��=%d\n", sum);
	return 0;
}*/
//13��
/*
int main(void) {
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("==================\n");
	printf("    i    i�� ������\n");
	printf("==================\n");
	for(int i=1;i<=n;i++)
		printf("%5d      %d\n",i,i*i*i);
	return 0;
 }*/
//14��
/*
int main(void) {
	printf("***********\n");
	for (int i = 0; i < 5; i++)
		printf("*         *\n");
	printf("***********\n");

	return 0;
}*/
//15��
/*
int main(void) {
	long fact = 1;
	int i, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;
	printf("%d!�� %d�Դϴ�\n",n,fact);

	return 0;
}*/
//16��
/*
int main(void) {
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&n);
	i = 0;
	while (i <= n) {
		fact = fact * i;
		i++;
	}
	printf("%d!��  %d�Դϴ�.\n", n, fact);
	return 0;
}*/
//17��
/*
int main(void) {
	int x, y;
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++)
			printf("*");
		printf("\n");
	}
	return 0;
}*/
//18��
/*
int main(void) {
	int x, y;
	for (y = 1; y <= 5; y++) {
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");
	}
	return 0;
}*/
//19��
/*
int main(void) {
	int a, b, c;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if ((a * a + b * b) == c * c)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}*/
//20��
/*
int main(void) {
	int year = 0, money = SEED_MONEY;
	while (1) {
		year++;
		money = money * (1 + 0.30);
		if (money > 10 * SEED_MONEY)
			break;
	}
	printf("%d��\n", year);
	return 0;
}*/
//21��
/*
int main(void) {
	double v;
	while (1) {
		printf("�Ǽ����� �Է��Ͻÿ�: ");
		scanf("%lf", &v);
		if (v < 0.0)
			break;
		printf("%f�� �������� %f�Դϴ�.\n", v, sqrt(v));
	}
	return 0;
}*/
//22��
/*
int main(void) {
	int x, y;
	for (y = 1; y < 10000; y++) {
		for (x = 1; x < 10; x++) {
			if ( _kbhit() )
				goto OUT;
			printf("*");

		}
		printf("\n");
	}
OUT:
	return 0;
}*/
//23��
/*
int main(void) {
	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	return 0;
}*/
//24��
/*
int main(void) {
	char letter;
	while (1) {
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf(" %c ", &letter);
		if(letter == 'Q')
			break;
		if (letter < 'a' || letter>'z')
			continue;
		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
	return 0;
}*/
//25��
/*
int main(void) {
	double divisor, divident, sum;
	int loop_count;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("�ݺ�Ƚ��: ");
	scanf("%d", &loop_count);
	while (loop_count > 0) {
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
	}
	printf("���̰� =%f\n", sum);
	return 0;
}*/
//26��
/*
int main(void) {
	int i, years;
	double total, rate, investment;
	printf("����: ");
	scanf("%lf", &investment);
	printf("����: ");
	scanf("%lf", &rate);
	printf("�Ⱓ(��): ");
	scanf("%lf", &years);
	printf("=================================\n");
	printf("            ���� ������\n");
	printf("=================================\n");
	total = investment;
	rate /= 100.0;
	for (i = 0; i < years; i++) {
		total = total * (i + rate);
		printf("%2d  %10.1f\n", i + 1, total);
	}
	return 0;
}*/
//27��
/*
int main(void) {
	int x, y, answer, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d= ", x, y);
		scanf("%d", answer);
		if (x + y == answer)
			printf("�¾ҽ��ϴ�\n");
		else
			printf("Ʋ�Ƚ��ϴ�\n");
	}
	return 0;
}*/
//28��

int main(void) {
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++) {
		int cash = initial_money;
		while (cash > 0 && cash < goal) {
			if ((double)rand() / RAND_MAX < 0.5)cash++;
			else        cash--;
		}
		if (cash == goal)wins++;
	}
	printf("�ʱ� �ݾ� $%d \n", initial_money);
	printf("��ǥ �ݾ� $%d \n", goal);
	printf("100���߿��� %d�� ���� \n", wins);
	return 0;
}