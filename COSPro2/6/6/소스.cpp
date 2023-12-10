#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) //각 ret1, ret2등에서 입력받은값을 score[], score_len에 저장합니다.
{
    int* answer = (int*)malloc(sizeof(int) * score_len);//바이트를 할당합니다 (int*)malloc(sizeof(int) * score_len)의 식으로 기존 malloc의 4바이트와 score_len의 값을 곱합니다.
    for (int i = 0; i < score_len; i++)//i가 score_len보다 큰값을 가질때까지 반복합니다.
    {
        answer[i] = 1;//초기 순위를 1로 설정합니다.

        for (int j = 0; j < score_len; j++) //j가 score_len과 같은 값을 가질때까지 반복합니다.
        {
            if (score[j] > score[i])//score[j]가 score[i] 보다 클 때, 작동합니다.
            {
                answer[i]++;//score[i]에 대한 순위를 1 증가시킵니다.
            }
        }
    }
    return answer;//저장된 값을 반환합니다.
}

int main()
{
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 }; //배열의 숫자들을 score1에 저장해줍니다
    int score_len1 = 8; //score1에 숫자가 8개가 저장되었으므로 8을 입력하여줍니다.
    int* ret1 = solution(score1, score_len1);//저장된 score1, score1_len을 solution함수에 입력합니다 그후 solution함수를 실행시킨뒤 반환 받은 값을 저장합니다.

    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < score_len1; i++) // 반환받은 값을 출력합니다.
    {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }

    printf("] 입니다.\n");

    free(ret1);//malloc()를 사용했을때 할당받은 메모리를 해제합니다. 

    int score2[] = { 10, 20, 20, 30 };//배열의 숫자들을 score1에 저장해줍니다
    int score_len2 = 4;//score1에 숫자가 4개가 저장되었으므로 4을 입력하여줍니다.
    int* ret2 = solution(score2, score_len2);//저장된 score1, score1_len을 solution함수에 입력합니다 그후 solution함수를 실행시킨뒤 반환 받은 값을 저장합니다.
    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < score_len2; i++)// 반환받은 값을 출력합니다.
    {
        if (i != 0)
            printf(", ");

        printf("%d", ret2[i]);

    }
    printf("] 입니다.\n");

    free(ret2);//malloc()를 사용했을때 할당받은 메모리를 해제합니다. 
}