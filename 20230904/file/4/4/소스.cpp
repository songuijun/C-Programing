#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3
typedef struct {
    char name[20];
    int num;
    double score;
} STUD;
int main(void) {
    FILE* fp = NULL;
    STUD list[SIZE] = {
        {"NAMGUNG", 1, 4.5},
        {"SONG", 2, 4.3},
        {"HU", 3, 3.7}
    };
    STUD s;
    fopen_s(&fp, "score.dat", "wb");
    fwrite(list, sizeof(STUD), SIZE, fp);
    fclose(fp);
    fopen_s(&fp, "score.dat", "rb");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        return 1;
    }
    for (int i = 0; i < SIZE; i++) {
        fread(&s, sizeof(STUD), 1, fp);
        printf("이름 = %s, 학번 = %d, 학점 = %f\n", s.name, s.num, s.score);
    }
    fclose(fp);

    return 0;
}