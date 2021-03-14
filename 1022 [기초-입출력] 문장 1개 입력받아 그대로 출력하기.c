#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    char Text[2001]; // 문자형 변수 Text 선언 및 2000의 크기 할당. 
    fgets (Text, 2000, stdin); // fgets을 쓰면 공백이후의 문자도 입출력 할 수 있음.  
    printf("%s", Text); // 문자열을 출력함. %s = 문자열 
    return 0; // 0 반환 
 
}


