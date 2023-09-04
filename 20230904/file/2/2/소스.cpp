#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp = NULL;
    char buf1[100], buf2[100];
    printf("문장 입력: ");
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) {
        fprintf(stderr, "입력 오류\n");
        return 1;
    }
    if ((fp = fopen("text.txt", "w")) == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }
    fputs(buf1, fp);
    fclose(fp);
    if ((fp = fopen("text.txt", "r")) == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }
    if (fgets(buf2, sizeof(buf2), fp) == NULL) {
        fprintf(stderr, "파일 읽기 실패\n");
        fclose(fp);
        return 1;
    }
    printf("%s 파일로부터 읽은 문자열: %s", "text.txt", buf2);
    fclose(fp);

    return 0;
}