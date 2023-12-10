#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) //�� ret1, ret2��� �Է¹������� score[], score_len�� �����մϴ�.
{
    int* answer = (int*)malloc(sizeof(int) * score_len);//����Ʈ�� �Ҵ��մϴ� (int*)malloc(sizeof(int) * score_len)�� ������ ���� malloc�� 4����Ʈ�� score_len�� ���� ���մϴ�.
    for (int i = 0; i < score_len; i++)//i�� score_len���� ū���� ���������� �ݺ��մϴ�.
    {
        answer[i] = 1;//�ʱ� ������ 1�� �����մϴ�.

        for (int j = 0; j < score_len; j++) //j�� score_len�� ���� ���� ���������� �ݺ��մϴ�.
        {
            if (score[j] > score[i])//score[j]�� score[i] ���� Ŭ ��, �۵��մϴ�.
            {
                answer[i]++;//score[i]�� ���� ������ 1 ������ŵ�ϴ�.
            }
        }
    }
    return answer;//����� ���� ��ȯ�մϴ�.
}

int main()
{
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 }; //�迭�� ���ڵ��� score1�� �������ݴϴ�
    int score_len1 = 8; //score1�� ���ڰ� 8���� ����Ǿ����Ƿ� 8�� �Է��Ͽ��ݴϴ�.
    int* ret1 = solution(score1, score_len1);//����� score1, score1_len�� solution�Լ��� �Է��մϴ� ���� solution�Լ��� �����Ų�� ��ȯ ���� ���� �����մϴ�.

    printf("solution �Լ��� ��ȯ ���� [");

    for (int i = 0; i < score_len1; i++) // ��ȯ���� ���� ����մϴ�.
    {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }

    printf("] �Դϴ�.\n");

    free(ret1);//malloc()�� ��������� �Ҵ���� �޸𸮸� �����մϴ�. 

    int score2[] = { 10, 20, 20, 30 };//�迭�� ���ڵ��� score1�� �������ݴϴ�
    int score_len2 = 4;//score1�� ���ڰ� 4���� ����Ǿ����Ƿ� 4�� �Է��Ͽ��ݴϴ�.
    int* ret2 = solution(score2, score_len2);//����� score1, score1_len�� solution�Լ��� �Է��մϴ� ���� solution�Լ��� �����Ų�� ��ȯ ���� ���� �����մϴ�.
    printf("solution �Լ��� ��ȯ ���� [");

    for (int i = 0; i < score_len2; i++)// ��ȯ���� ���� ����մϴ�.
    {
        if (i != 0)
            printf(", ");

        printf("%d", ret2[i]);

    }
    printf("] �Դϴ�.\n");

    free(ret2);//malloc()�� ��������� �Ҵ���� �޸𸮸� �����մϴ�. 
}