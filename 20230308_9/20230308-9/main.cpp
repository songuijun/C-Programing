/**********
두수의 합을 구하는 프로그램입니다. 
*파일 이름 : main c
* 설명     : 두수의 합을 구하는 프로그램입니다.
* 작성자   : 송의준
* 작성일자 : 2023. 03. 08
************************/

#include <stdio.h>//전처리 header file
int  main(void)//메인함수 
{ 
    int x; int y; int sum; int sub; int mul; int div; //변수(var iable)선언(define) / 변하지 않는 수는 상수
    //int s, y, sum;
    x = 7; y = 3;
    /////////덧셈////
    sum = x + y;//연산
    printf("두수의 합: %d \n", sum);//출력 
    /////////뺄셈/////
    sub = x - y;//연산
    printf("두수의 차: %d \n", sub);//출력 
    //////곱셈///////
    mul = x * y;//연산
    printf("두수의 곱한값: %d \n", mul);//출력 
    //////나눗셈////
    div = x / y;//연산
    printf("두수의 나눗셈값: %d \n", div);//출력 
    /////////////나머지///////
    sum = x % y;//연산
    printf("x에 y를 나눈 나머지: %d \n", sum);//출력
    return 0;//함수 값 반환

}