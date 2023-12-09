#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len)//main()���� int ret�� ���� ����Ǿ����ϴ�. solution(height, height_len) ���� ����Ǿ��� ������ main�� height,height_len�� ���� �Է� �޽��ϴ�.
{
    int count = 0;//count�� 0���� �����մϴ�.

    //i�� �迭 �Լ��� ���ΰ��Դϴ�.
    for (int i = 0; i < height_len; i++)//i�� 0���� �����ϰ� i�� height_len���� Ŀ���� �ȴٸ� ����˴ϴ�. �ѹ� �����Ҷ����� i���� +1�� �մϴ�. height_len���� 4�� �����Ǿ������Ƿ� 4���� �ݺ��� ��ģ�� ���� �˴ϴ�.
    {
        //j�� �迭 �Լ��� ���ΰ��Դϴ�.
        for (int j = 0; j < height_len; j++)//j�� 0���� �����ϰ� j�� height_len���� Ŀ���� �ȴٸ� ����˴ϴ�. �ѹ� �����Ҷ����� j���� +1�� �մϴ�. height_len���� 4�� �����Ǿ������Ƿ� 4���� �ݺ��� ��ģ�� ���� �˴ϴ�.
        {
            //if�� 4X4 �迭���� �����¿��� ������ ������ �������� �������� ������ �ִ��� Ȯ�� �� �� �ֵ��� �մϴ�. ������ ������ ���� �ش� �������� ���������� ���, count�� +1 ���ݴϴ�.
            if ((i == 0 || height[i - 1][j] < height[i][j]) &&//��
                (i == height_len - 1 || height[i + 1][j] < height[i][j]) &&//��
                (j == 0 || height[i][j - 1] < height[i][j]) && //��
                (j == 3 || height[i][j + 1] < height[i][j]))//��
            {
                count++;// if�� ����Ǿ��� ��� +1�� �մϴ�.
            }
        }
    }
    return count;//solution���� for���� ���� ������� for���� ���� �����Ǿ��� count���� ��ȯ�մϴ�.
}

int main()
{
    int height[4][4] = {{3, 6, 2, 8},{7, 3, 4, 2},{8, 6, 7, 3},{5, 3, 2, 9}};// height��� �迭�� 4X4 ũ��� ���ϰ� �׿� �°� ���ڵ��� ������.
    int height_len = 4;//height_len�� 4�� ������.
    int ret = solution(height, height_len);//solution�Լ��� ������ solution(height,height_len)���� �����ߴ� �������� ���� �Է��� �׸��� solution �Լ��� return���� ������.

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);//����Ǿ��� ret�� ���� �����.

    return 0;
}