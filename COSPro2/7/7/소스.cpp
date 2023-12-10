#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k) //ret1 Ȥ�� ret2���� ���, ���, k�� ���� �Է��� ������ �����մϴ�.
{
    int answer = 0;// answer�� 0���� �����մϴ�.

    while (num_apple >= 3 && num_carrot >= 1 && k > 0)// ����� �ּ� 3���̻��ִ���, ����� �ּ� 1���̻� �ִ��� k�� 0���� ū�� Ȯ���մϴ�.
    {
        num_apple -= 3;//num_apple���� 3�� ���ϴ� �ֽ��� ����� ���� ����Ǿ��Դϴ�.
        num_carrot -= 1;//num_carrot ���� 1�� ���ϴ� �ֽ��� ����� ���� ����� ���Դϴ�.
        k--;// k�� ���� �ϳ� ���ϴ�.
        answer++;//
    }
   return answer;
}

int main() 
{
    int num_apple1 = 5;//����� ������ �����ݴϴ�
    int num_carrot1 = 1;//����� ������ �����ݴϴ�
    int k1 = 2;//�䳢���� �� ��� Ȥ�� ����� ���Դϴ�.
    int ret1 = solution(num_apple1, num_carrot1, k1);//solution �Լ��� �����մϴ�, ���, ���, �䳢������ ������ ���� �Է��Ͽ� solution���� �Է��մϴ�.

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);//solution�Լ��� ���� ��ȯ �������� ret1�̹Ƿ� ret1�� ����Ͽ� ���� �� �ִ� �ֽ��� �ִ�ġ�� �˷��ݴϴ�


    int num_apple2 = 10;//����� ������ �����ݴϴ�
    int num_carrot2 = 5;//����� ������ �����ݴϴ�
    int k2 = 4;//�䳢���� �� ��� Ȥ�� ����� ���Դϴ�.
    int ret2 = solution(num_apple2, num_carrot2, k2);//solution �Լ��� �����մϴ�, ���, ���, �䳢������ ������ ���� �Է��Ͽ� solution���� �Է��մϴ�.

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);//solution�Լ��� ���� ��ȯ �������� ret1�̹Ƿ� ret1�� ����Ͽ� ���� �� �ִ� �ֽ��� �ִ�ġ�� �˷��ݴϴ�

    return 0;
}