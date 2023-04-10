#include <stdio.h>

int main() {
	int f, l, z;
	printf("정수를 입력하시오:");
	scnaf("%d", &l);
	for (f = 1; f <= l; f++) {
		z = z + f;
	}
	printf("1부터 10까지 합한값 %d", l, z);
	return 0;
}