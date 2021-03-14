#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    char Text[2000]; // 문자형 변수 Text 선언 및 2000의 크기 할당. 
    scanf("%s", &Text); // scanf함수를 통해 문자열 형태로 Text를 변수로 받고 할당함. 
    printf("%s", Text); // 문자열을 출력함. %s = 문자열 
    return 0; // 0 반환 
 
}


