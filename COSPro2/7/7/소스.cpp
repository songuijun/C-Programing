#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k) //ret1 혹은 ret2에서 사과, 당근, k의 값을 입력을 받으면 저장합니다.
{
    int answer = 0;// answer를 0으로 선언합니다.

    while (num_apple >= 3 && num_carrot >= 1 && k > 0)// 사과가 최소 3개이상있는지, 당근이 최소 1개이상 있는지 k가 0보다 큰지 확인합니다.
    {
        num_apple -= 3;//num_apple에서 3을 뺍니다 주스를 만들기 위한 사과의양입니다.
        num_carrot -= 1;//num_carrot 에서 1을 뺍니다 주스를 만들기 위한 당근의 양입니다.
        k--;// k의 값을 하나 뺍니다.
        answer++;//
    }
   return answer;
}

int main() 
{
    int num_apple1 = 5;//사과의 개수를 정해줍니다
    int num_carrot1 = 1;//당근의 개수를 정해줍니다
    int k1 = 2;//토끼에게 줄 사과 혹은 당근의 수입니다.
    int ret1 = solution(num_apple1, num_carrot1, k1);//solution 함수를 실행합니다, 사과, 당근, 토끼에게줄 먹이의 수를 입력하여 solution으로 입력합니다.

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);//solution함수를 통해 반환 받은값이 ret1이므로 ret1을 출력하여 만들 수 있는 주스의 최대치를 알려줍니다


    int num_apple2 = 10;//사과의 개수를 정해줍니다
    int num_carrot2 = 5;//당근의 개수를 정해줍니다
    int k2 = 4;//토끼에게 줄 사과 혹은 당근의 수입니다.
    int ret2 = solution(num_apple2, num_carrot2, k2);//solution 함수를 실행합니다, 사과, 당근, 토끼에게줄 먹이의 수를 입력하여 solution으로 입력합니다.

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);//solution함수를 통해 반환 받은값이 ret1이므로 ret1을 출력하여 만들 수 있는 주스의 최대치를 알려줍니다

    return 0;
}