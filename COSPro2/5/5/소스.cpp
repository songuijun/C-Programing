#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len)//int* solution에서 answer가 0이 되어 실행되었습니다 int* solution에서 받은 값 mid_scores, final_scores, mid_scores_len를 각 scores1, scores2, scores_len으로 변환&저장 합니다.
{
    int answer = 0;//answer을 0으로 선언합니다.
    for (int i = 0; i < scores_len; i++)//int i를 선언 후,  i가 scores_len보다 큰값을 가지게 되면 종료합니다. 
        if (answer < scores2[i] - scores1[i])// answer 가 중간고사점수 - 기말고사점수의 차보다 작을시 실행됩니다. 이때 amswer의 값이 중간고사점수 - 기말고사점수의 값을 가지게 되고, 이를 answer에 저장합니다.
            answer = scores2[i] - scores1[i];

    return answer;//for문이 끝났을때, answer의 값을 반환합니다.

}

int func_b(int scores1[], int scores2[], int scores_len)//int* solution에서 answer가 1이 되어 실행되었습니다 int* solution에서 받은 값 mid_scores, final_scores, mid_scores_len를 각 scores1, scores2, scores_len으로 변환&저장 합니다.
{
    int answer = 0;//answer을 0으로 선언합니다.
    for (int i = 0; i < scores_len; i++)//int i를 선언 후,  i가 scores_len보다 큰값을 가지게 되면 종료합니다. 
        if (answer < scores2[i] - scores1[i]) // answer 가 기말고사점수 - 중간고사점수의 차보다 작을시 실행됩니다. 이때 amswer의 값이 기말고사점수 - 중간고사점수의 값을 가지게 되고, 이를 answer에 저장합니다.
            answer = scores2[i] - scores1[i];

    return answer;//for문이 끝났을때, answer의 값을 반환합니다.

}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)//int* ret을 통하여 입력받은 갑들을 각 mid_scores,mid_scores_len,final_scores에 저장합니다.
{
    int* answer = (int*)malloc(sizeof(int) * 2); //int 타입의 원소가 2개인 배열을 할당하고 할당된 메모리의 시작 주소를 answer에 저장합니다.
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len); //answer가 0일때, func_a를 실행합니다.
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len); //answer가 1일때, func_b를 실행합니다.

    return answer;//func_a,func_b를 종료하였을때, amswer의 값을 반환합니다.

}

int main()
{
    int mid_scores[] = { 20, 50, 40 };                              //중간고사 성적입니다.
    int final_scores[] = { 10, 50, 70 };                            //기말고사 성적입니다.
    int* ret = solution(mid_scores, 3, final_scores, 3);            //int* ret을 통해 solution에 mid_scores와 final_scores의 값을 solution에 입력합니다. mid_scores,3,final_scores,3으로 각 배열의 len값을 입력해줍니다.

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++)// i가 2보다 커졌을때 끝나는 for문 입니다.
    {
        if (i != 0) printf(", ");//만일 i가 0이 아닐시 , 를 출력합니다.
        printf("%d", ret[i]); //저장된 ret[i]의 값을 출력합니다.
    }

    printf("] 입니다.\n");

}