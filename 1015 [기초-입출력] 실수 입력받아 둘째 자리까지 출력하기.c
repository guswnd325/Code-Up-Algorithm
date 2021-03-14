#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    float actualnumber; // 실수형 변수 actual number 선언  
    scanf("%f", &actualnumber); // scanf함수를 통한 입력받기 -> actualnumber변수에 할당 
    printf("%.2f", actualnumber); // 입력받은 변수(actualnumber)를 2번쨰 소수점 자리수까지만 출력함
    return 0; // 0 반환 
 
}


