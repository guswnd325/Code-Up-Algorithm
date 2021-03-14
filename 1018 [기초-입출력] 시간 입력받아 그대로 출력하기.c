#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    int Hour, Minute; // 정수형 변수 Hour, Minute 선언  
    scanf("%d:%d", &Hour, &Minute); // scanf함수를 통해 x:x꼴의 형태로 Hour, Minute 변수를 각각 할당함. 
    printf("%d:%d", Hour, Minute); // 입력받은 변수를 x:x 꼴로 출력됨.
    return 0; // 0 반환 
 
}


