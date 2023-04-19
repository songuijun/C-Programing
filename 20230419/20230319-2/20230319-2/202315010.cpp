//202315010
//미래모빌리티 공학과
//송의준
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오: \n");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;

		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c 입니다.\n", letter);
	}
	return 0;
}