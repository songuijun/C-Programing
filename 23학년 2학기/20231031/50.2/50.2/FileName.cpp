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
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int numArr[10];
    int i = 0;

    while (i < 10 && fscanf(file, "%d", &numArr[i]) == 1) {
        i++;
    }

    fclose(file);

    if (i != 10) {
        printf("파일에서 데이터를 읽는 중 오류가 발생했습니다.\n");
        return 1;
    }

    qsort(numArr, 10, sizeof(int), compare);

    // 정렬된 값을 출력
    for (int j = 0; j < 10; j++) {
        printf("%d ", numArr[j]);
    }

    printf("\n");

    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int j = 0; j < 10; j++) {
        fprintf(file, "%d ", numArr[j]);
    }

    fclose(file);

    printf("정렬된 결과를 output.txt 파일에 저장했습니다.\n");

    return 0;
}
