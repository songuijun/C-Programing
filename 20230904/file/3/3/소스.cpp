#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = NULL;
    char name[50], name2[50];
    int num, num2;
    double score, score2;
    printf("�л��� �̸�, �й�, ���� �Է�: ");
    if (scanf("%s %d %lf", name, &num, &score) != 3) {
        fprintf(stderr, "�Է� ����\n");
        exit(1);
    }
    fopen_s(&fp, "score.txt", "wt");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    fprintf(fp, "%s %d %lf", name, num, score);
    fclose(fp);
    fopen_s(&fp, "score.txt", "rt");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    int c = fscanf(fp, "%s %d %lf", name2, &num2, &score2);
    if (c != 3) {
        fprintf(stderr, "���� �б� ����\n");
        exit(1);
    }
    printf("���Ϸκ��� �Է¹��� �л� ����(�Է¿� ������ ������ �� : %d)\n�̸�: %s\n�й�: %d\n����: %lf\n", c, name2, num2, score2);
    fclose(fp);

    return 0;
}