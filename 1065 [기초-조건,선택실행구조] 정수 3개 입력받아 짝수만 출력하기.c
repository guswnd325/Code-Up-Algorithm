#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0) {
		printf("%d ", a);
	}
	if (b % 2 == 0) {
		printf("%d ", b);
	}
	if (c % 2 == 0) {
		printf("%d ", c);
	}
	return 0; // 0 반환 

}




