#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	char letter;

	while (1) {
		printf("소문자를 입력하시오:");
		scanf("%c", &letter);
		if (letter == 'Q')
			break;
		if (letter < 'a' || letter>'z')
			continue;
		letter -= 32;
		printf("변환한 대문자는 %c입니다.\n");
	}
	return 0;
}