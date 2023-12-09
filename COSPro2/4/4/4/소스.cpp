#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len)//main()에서 int ret에 의해 실행되었습니다. solution(height, height_len) 으로 실행되었기 때문에 main의 height,height_len의 값을 입력 받습니다.
{
    int count = 0;//count를 0으로 선언합니다.

    //i는 배열 함수의 가로값입니다.
    for (int i = 0; i < height_len; i++)//i를 0으로 정의하고 i가 height_len보다 커지게 된다면 종료됩니다. 한번 실행할때마다 i값에 +1을 합니다. height_len값이 4로 고정되어있으므로 4번의 반복을 마친뒤 종료 됩니다.
    {
        //j는 배열 함수의 세로값입니다.
        for (int j = 0; j < height_len; j++)//j를 0으로 정의하고 j가 height_len보다 커지게 된다면 종료됩니다. 한번 실행할때마다 j값에 +1을 합니다. height_len값이 4로 고정되어있으므로 4번의 반복을 마친뒤 종료 됩니다.
        {
            //if는 4X4 배열에서 상하좌우의 지역이 현재의 지역보다 낮은값을 가지고 있는지 확인 할 수 있도록 합니다. 인접한 지역이 전부 해당 지역보다 위험지역일 경우, count를 +1 해줍니다.
            if ((i == 0 || height[i - 1][j] < height[i][j]) &&//상
                (i == height_len - 1 || height[i + 1][j] < height[i][j]) &&//하
                (j == 0 || height[i][j - 1] < height[i][j]) && //좌
                (j == 3 || height[i][j + 1] < height[i][j]))//우
            {
                count++;// if가 실행되었을 경우 +1을 합니다.
            }
        }
    }
    return count;//solution에서 for문이 끝이 났을경우 for문을 통해 증가되었을 count값을 반환합니다.
}

int main()
{
    int height[4][4] = {{3, 6, 2, 8},{7, 3, 4, 2},{8, 6, 7, 3},{5, 3, 2, 9}};// height라는 배열을 4X4 크기로 정하고 그에 맞게 숫자들을 저장함.
    int height_len = 4;//height_len을 4로 저장함.
    int ret = solution(height, height_len);//solution함수를 시작함 solution(height,height_len)으로 저장했던 변수들의 값을 입력함 그리고 solution 함수의 return값을 저장함.

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);//저장되었던 ret의 값을 출력함.

    return 0;
}