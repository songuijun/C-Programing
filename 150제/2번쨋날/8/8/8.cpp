#pragma warning(disable:4996)
#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int jn, mo;
	jn = 0;
	mo = 0;

	printf("===============\n");
	printf("   ���Ǳ�      \n");
	printf("===============\n");
	printf("      �޴�     \n");
	printf("[1] �ݶ�        500��\n");
	printf("[2] ���̴�      500��  \n");
	printf("[3] Ŀ��        500��\n");
	printf("[4] ��          500��\n");
	printf("�޴��� �����Ͽ� �ּ���: \n");
	scanf_s("%d", &jn);
	printf("�����Ͻ� �ݾ��� �־��ּ���");
	scanf_s("%d", &mo);
	if (mo < 500) {
		printf("�ܾ��� �����մϴ� �Է��Ͻŵ� %d�� ��ȯ�˴ϴ�.",mo);
	}
	else {
		if (jn == 1) {
			mo -=500;
			printf("�ݶ� ����Ǿ����ϴ�.\n");
			if (mo >= 1) {
				printf("�ܵ� %d���� ��ȯ �մϴ�.",mo);
				printf("�ȳ��� ���ʽÿ�.");
			}
			else {
				printf("�ȳ��� ���ʽÿ�.");
			}
		}
		else if (jn == 2) {
			mo -= 500;
			printf("���̴ٰ� ����Ǿ����ϴ�.\n");
			if (mo >= 1) {
				printf("�ܵ� %d���� ��ȯ �մϴ�.", mo);
				printf("�ȳ��� ���ʽÿ�.");
			}
			else {
				printf("�ȳ��� ���ʽÿ�.");
			}
		}
		else if (jn == 3) {
			mo -=500;
			printf("Ŀ�ǰ� ����Ǿ����ϴ�.\n");
			if (mo >= 1) {
				printf("�ܵ� %d���� ��ȯ �մϴ�.", mo);
				printf("�ȳ��� ���ʽÿ�.");
			}
			else {
				printf("�ȳ��� ���ʽÿ�.");
			}
		}
		else {
			mo -= 500;
			printf("��(��)�� ����Ǿ����ϴ�.\n");
			if (mo >= 1) {
				printf("�ܵ� %d���� ��ȯ �մϴ�.", mo);
				printf("�ȳ��� ���ʽÿ�.");
			}
			else {
				printf("�ȳ��� ���ʽÿ�.");
			}
		}
	}
	return 0;
}