#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int hour, minute, second; // 정수형 변수 선언 
	scanf("%d:%d:%d", &hour, &minute, &second); // scanf로 각각 변수 값을 받고 할당. 
	printf("%d", minute); // 분만 출력 
	
    return 0; // 0 반환 
 
}



