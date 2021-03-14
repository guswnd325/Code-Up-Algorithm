#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c) { // a가 b보다 작고 c보다작
		printf("%d", a);
	}
	else if (b < a && b < c) {
		printf("%d", b);
	}
	else {
		printf("%d", c);
	}
	return 0; // 0 반환 

}




