#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int main() {
    FILE* file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int numArr[10];
    int i = 0;

    while (i < 10 && fscanf(file, "%d", &numArr[i]) == 1) {
        i++;
    }

    fclose(file);

    if (i != 10) {
        printf("���Ͽ��� �����͸� �д� �� ������ �߻��߽��ϴ�.\n");
        return 1;
    }

    qsort(numArr, 10, sizeof(int), compare);

    // ���ĵ� ���� ���
    for (int j = 0; j < 10; j++) {
        printf("%d ", numArr[j]);
    }

    printf("\n");

    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    for (int j = 0; j < 10; j++) {
        fprintf(file, "%d ", numArr[j]);
    }

    fclose(file);

    printf("���ĵ� ����� output.txt ���Ͽ� �����߽��ϴ�.\n");

    return 0;
}
