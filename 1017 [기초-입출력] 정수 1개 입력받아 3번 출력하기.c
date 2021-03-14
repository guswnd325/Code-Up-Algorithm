#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    int Number; // 정수형 변수 Number 선언  
    scanf("%d", &Number); // scanf함수를 통한 입력받기 -> Number변수에 할당 
    printf("%d %d %d", Number, Number, Number); // 입력받은 변수(Number)를 3번 연달아 출력함. 
    return 0; // 0 반환 
 
}


