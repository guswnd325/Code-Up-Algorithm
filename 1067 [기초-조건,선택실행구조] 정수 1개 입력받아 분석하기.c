#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int a;
	scanf("%d", &a);
	if (a < 0) {
		printf("minus\n");
	}
	else {
		printf("plus\n");
	}
	if (a % 2 == 0) {
		printf("even\n");
	}
	else {
		printf("odd\n");
	}
	return 0; // 0 반환 

}




