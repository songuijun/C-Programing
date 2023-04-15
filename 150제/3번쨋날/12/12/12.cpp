#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int i;
	i = 2000000000;
	printf("%d\n", i);

	int j;
	j = 3000000000;//정수형 변수는 +-2147483647만큼만 출력이 가능하므로, 그 숫자를 넘어가는 3000000000은 출력이 안된다.
	printf("%d", j);
}