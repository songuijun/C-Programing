#include <stdio.h>

int main() {
	int f, l, z;
	printf("������ �Է��Ͻÿ�:");
	scnaf("%d", &l);
	for (f = 1; f <= l; f++) {
		z = z + f;
	}
	printf("1���� 10���� ���Ѱ� %d", l, z);
	return 0;
}