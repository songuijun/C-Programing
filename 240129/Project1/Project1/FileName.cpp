#pragma warning(disable :4996)  // 경고 4996을 무시하고 실행하도록함.
#define MAX_LEN 100  // 문자열의 최댓값 설정.
#include <stdio.h> 


////파일 모드 특징
// r  :	기능은 읽기 (입력)	    경로에 파일이 존재하지 않을경우 :에러	    파일이 존재할 경우 :기존 파일 이용
// r+ :	기능은 읽기+쓰기 (출력)	경로에 파일이 존재하지 않을경우 :에러	    파일이 존재할 경우 :기존 파일 이용
// w  :	기능은 쓰기         	경로에 파일이 존재하지 않을경우 :새로 생성	파일이 존재할 경우 :새로 생성	    
// w+ :	기능은 쓰기 + 읽기 	    경로에 파일이 존재하지 않을경우 :새로 생성	파일이 존재할 경우 :새로 생성    	
// a  :	기능은 쓰기 (덧붙이기)	경로에 파일이 존재하지 않을경우 :새로 생성	파일이 존재할 경우 :기존 파일 이용	
// a+ :	기능은 쓰기, 읽기	    경로에 파일이 존재하지 않을경우 :새로 생성	파일이 존재할 경우 :기존 파일 이용

int main()
{
    FILE* fs;  // 파일 포인터 선언.
    fs = fopen("C:\\Users\\user\\Desktop\\미모과\\방학\\240129\\Project1\\Project1\\x64\\Debug\\text.txt", "r");
    // 파일을 읽기 모드("r")로 열고, 파일 포인터에 할당. 실패 시 NULL 반환.
    if (fs == NULL)  // 파일을 여는데 실패했을 경우 실행.
    {
        perror("파일 열기 오류");  // 오류 메시지 출력.
        return 1;  // 프로그램 종료와 반환값 반환 반환값은 1.
    }
    while (feof(fs) == 0)  // 파일의 끝에 도달하지 않은 동안 반복.
    {
        char str[MAX_LEN];
        if (fgets(str, MAX_LEN, fs) != NULL)
        {
            printf("%s", str);  // 읽은 문자열을 출력.
        }
        else
        {
            break;  // 파일의 끝에 도달하면 반복 종료.
        }
    }
    fclose(fs);  // 파일 닫기.
    return 0;  // 프로그램 정상 종료, 반환값은 0.
}