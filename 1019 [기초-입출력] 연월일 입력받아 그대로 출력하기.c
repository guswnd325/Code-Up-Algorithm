#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    int Year, Month, Day; // 정수형 변수 Year, Month, Day 선언. 
    scanf("%d.%d.%d", &Year, &Month, &Day); // %d.%d.%d형태로 각각의 변수를 받고 할당함. 
    printf("%04d.%02d.%02d", Year, Month, Day); // %04d = 4자리수할당. 빈공간은 0으로 치환후 출력함. 
    return 0; // 0 반환  
 
}


