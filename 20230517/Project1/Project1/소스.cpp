#include <stdio.h>
/*
	int get_integer(void) {
		int n;

		do {
			printf("��� �Է�");
			scanf_s("%d", &n);
		} while (n <= 0);

		return n;
	}
	int is_prime(int n) {
		int i;
		for (i = 2; i < n; i++) {
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
	int main() {
		int n;
		n = get_integer();
		if (is_prime(n) == 1)
			printf("%d �� �Ҽ��Դϴ�.", n);
		else
			printf("%d �� �Ҽ��� �ƴմϴ�.",n);
		return 0;
}*/
//2��
/*
int get_integer(void) {
	int n;

	do {
		printf("��� �Է�: ");
		scanf_s("%d", &n);

		if (n < 0) {
			n = -n;  // ������ ����� ��ȯ
		}
	} while (n <= 0);

	return n;
}

int is_prime(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d��(��) �Ҽ��Դϴ�.\n", n);
	else
		printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}*/
//mk.2
/*
int get_integer(void) {
	int n;

	do {
		printf("��� �Է�: ");
		scanf_s("%d", &n);

		if (n < 0) {
			printf("����: ������ �Է��� �� �����ϴ�. �ٽ� �Է����ּ���.\n");
		}
	} while (n < 0);

	return n;
}

int is_prime(int n) {
	if (n < 2)
		return 0;

	int i;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d��(��) �Ҽ��Դϴ�.\n", n);
	else
		printf("%d��(��) �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}*/
//3��
int get_integer(void) {
	int n;

	do {
		printf("��� �Է�: ");
		scanf_s("%d", &n);

		if (n <= 0) {
			printf("����: ������ �Է��� �� �����ϴ�. �ٽ� �Է����ּ���.\n");
		}
	} while (n <= 0);

	return n;
}

int is_prime(int n) {
	if (n < 2)
		return 0;

	int i;
	for (i = 2; i * i <= n; i++){
		if (n % i == 0)
			return 0;
	}
	return 1;
}

void print_primes(int start, int end) {
	printf("%d���� %d������ �Ҽ�: ", start, end);

	int i;
	for (i = start; i <= end; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}

	printf("\n");
}

int main() {
	int n;
	n = get_integer();

	print_primes(1, n);

	return 0;
}