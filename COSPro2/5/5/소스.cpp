#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len)//int* solution���� answer�� 0�� �Ǿ� ����Ǿ����ϴ� int* solution���� ���� �� mid_scores, final_scores, mid_scores_len�� �� scores1, scores2, scores_len���� ��ȯ&���� �մϴ�.
{
    int answer = 0;//answer�� 0���� �����մϴ�.
    for (int i = 0; i < scores_len; i++)//int i�� ���� ��,  i�� scores_len���� ū���� ������ �Ǹ� �����մϴ�. 
        if (answer < scores2[i] - scores1[i])// answer �� �߰�������� - �⸻��������� ������ ������ ����˴ϴ�. �̶� amswer�� ���� �߰�������� - �⸻��������� ���� ������ �ǰ�, �̸� answer�� �����մϴ�.
            answer = scores2[i] - scores1[i];

    return answer;//for���� ��������, answer�� ���� ��ȯ�մϴ�.

}

int func_b(int scores1[], int scores2[], int scores_len)//int* solution���� answer�� 1�� �Ǿ� ����Ǿ����ϴ� int* solution���� ���� �� mid_scores, final_scores, mid_scores_len�� �� scores1, scores2, scores_len���� ��ȯ&���� �մϴ�.
{
    int answer = 0;//answer�� 0���� �����մϴ�.
    for (int i = 0; i < scores_len; i++)//int i�� ���� ��,  i�� scores_len���� ū���� ������ �Ǹ� �����մϴ�. 
        if (answer < scores2[i] - scores1[i]) // answer �� �⸻������� - �߰���������� ������ ������ ����˴ϴ�. �̶� amswer�� ���� �⸻������� - �߰���������� ���� ������ �ǰ�, �̸� answer�� �����մϴ�.
            answer = scores2[i] - scores1[i];

    return answer;//for���� ��������, answer�� ���� ��ȯ�մϴ�.

}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)//int* ret�� ���Ͽ� �Է¹��� ������ �� mid_scores,mid_scores_len,final_scores�� �����մϴ�.
{
    int* answer = (int*)malloc(sizeof(int) * 2); //int Ÿ���� ���Ұ� 2���� �迭�� �Ҵ��ϰ� �Ҵ�� �޸��� ���� �ּҸ� answer�� �����մϴ�.
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len); //answer�� 0�϶�, func_a�� �����մϴ�.
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len); //answer�� 1�϶�, func_b�� �����մϴ�.

    return answer;//func_a,func_b�� �����Ͽ�����, amswer�� ���� ��ȯ�մϴ�.

}

int main()
{
    int mid_scores[] = { 20, 50, 40 };                              //�߰���� �����Դϴ�.
    int final_scores[] = { 10, 50, 70 };                            //�⸻��� �����Դϴ�.
    int* ret = solution(mid_scores, 3, final_scores, 3);            //int* ret�� ���� solution�� mid_scores�� final_scores�� ���� solution�� �Է��մϴ�. mid_scores,3,final_scores,3���� �� �迭�� len���� �Է����ݴϴ�.

    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < 2; i++)// i�� 2���� Ŀ������ ������ for�� �Դϴ�.
    {
        if (i != 0) printf(", ");//���� i�� 0�� �ƴҽ� , �� ����մϴ�.
        printf("%d", ret[i]); //����� ret[i]�� ���� ����մϴ�.
    }

    printf("] �Դϴ�.\n");

}