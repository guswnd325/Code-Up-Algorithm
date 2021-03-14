#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    char text1, text2; // 문자형 변수 text1, text2 선언  
    scanf("%c %c", &text1, &text2); // scanf함수를 통한 입력받기 -> text1, text2 변수에 각각 할당 
    printf("%c %c", text2, text1); // 입력받은 변수를 출력함
    return 0; // 0 반환 
 
}


