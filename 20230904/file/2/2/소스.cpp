#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp = NULL;
    char buf1[100], buf2[100];
    printf("���� �Է�: ");
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) {
        fprintf(stderr, "�Է� ����\n");
        return 1;
    }
    if ((fp = fopen("text.txt", "w")) == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }
    fputs(buf1, fp);
    fclose(fp);
    if ((fp = fopen("text.txt", "r")) == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }
    if (fgets(buf2, sizeof(buf2), fp) == NULL) {
        fprintf(stderr, "���� �б� ����\n");
        fclose(fp);
        return 1;
    }
    printf("%s ���Ϸκ��� ���� ���ڿ�: %s", "text.txt", buf2);
    fclose(fp);

    return 0;
}