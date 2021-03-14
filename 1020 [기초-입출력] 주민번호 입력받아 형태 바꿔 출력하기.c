#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
 
    int F, E; // 정수형 변수 F, E 선언  
    scanf("%d-%d", &F, &E); // scanf함수를 통해 x-x꼴의 형태로 F, E 변수를 각각 할당함. 
    printf("%06d%06d", F, E); // 입력받은 변수를 xx 꼴로 붙여서  출력함. 0을 나타낼수있도록 06도 포함해주도록 하자. 
    return 0; // 0 반환 
 
}


