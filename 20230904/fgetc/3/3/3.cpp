#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10

int main() {
    char hello[MAX];
    char one[10];
    char two[10];
    char three[10];
    FILE* fp;
    fp = fopen("hello.txt", "r");
    for (int i = 0; i < 3; i++)
    {
        fscanf(fp, "%s\n%s\n%s", one, two, three);
    }
    printf("first lin: %s\n", one);
    printf("second lin: %s\n", two);
    printf("third lin: %s", three);
    fclose(fp);
}
