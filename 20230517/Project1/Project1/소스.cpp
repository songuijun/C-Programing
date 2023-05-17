#include <stdio.h>
/*
	int get_integer(void) {
		int n;

		do {
			printf("양수 입력");
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
			printf("%d 은 소수입니다.", n);
		else
			printf("%d 은 소수가 아닙니다.",n);
		return 0;
}*/
//2번
/*
int get_integer(void) {
	int n;

	do {
		printf("양수 입력: ");
		scanf_s("%d", &n);

		if (n < 0) {
			n = -n;  // 음수를 양수로 변환
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
		printf("%d은(는) 소수입니다.\n", n);
	else
		printf("%d은(는) 소수가 아닙니다.\n", n);

	return 0;
}*/
//mk.2
/*
int get_integer(void) {
	int n;

	do {
		printf("양수 입력: ");
		scanf_s("%d", &n);

		if (n < 0) {
			printf("오류: 음수를 입력할 수 없습니다. 다시 입력해주세요.\n");
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
		printf("%d은(는) 소수입니다.\n", n);
	else
		printf("%d은(는) 소수가 아닙니다.\n", n);

	return 0;
}*/
//3번
int get_integer(void) {
	int n;

	do {
		printf("양수 입력: ");
		scanf_s("%d", &n);

		if (n <= 0) {
			printf("오류: 음수를 입력할 수 없습니다. 다시 입력해주세요.\n");
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
	printf("%d부터 %d까지의 소수: ", start, end);

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