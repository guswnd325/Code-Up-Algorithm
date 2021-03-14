#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 	int number; // 정수형 변수 number 선언. 
    float actualnumber; // 실수형 변수  actualnumber 선언 
    scanf("%d.%f", &number, &actualnumber); // scanf함수를 통해 소수형태로 변수를 각각 할당함. 
    printf("%d\n%.0f", number, actualnumber); //  정수자리수 출력후 줄바꾼뒤 소수점을 담고 있는 변수인 actualnumber를 소수점 0까지나타내서 출력함.  
    return 0; // 0 반환 
 
}


