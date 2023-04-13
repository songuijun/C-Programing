#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ham;
    ham = 0;

    printf("함수를 입력해주세요:");
    scanf("%d", &ham);

    cout << "ham: " << abs(ham) << "\n";

    

    return 0;
}