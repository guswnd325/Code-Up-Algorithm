#include <stdio.h> // 헤더파일 불러오기 


int main(void) { // 메인 함수 실행 
	int a; // 정수형 a 변수 선언
re: 
	scanf("%d", &a);
	if (a != 0) {
		printf("%d\n", a);
		goto re;
	}
	else {
		return 0; // 0 반환 d
	}
}




