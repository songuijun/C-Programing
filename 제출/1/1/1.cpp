/*20230424
�̷������Ƽ���а�
������*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("���� ������ �Է��ϼ���: ");
        scanf("%d", &num);

        if (num < 0) break; // ���� �Է� �� ����

        printf("%d�� ���: ", num);
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) printf("%d ", i);
        }
        printf("\n");
    }

    printf("���α׷��� �����մϴ�.");
    return 0;
}