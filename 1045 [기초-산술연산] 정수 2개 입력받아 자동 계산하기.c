#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	unsigned int n1, n2; // 정수형 변수 n1, n2 선언
	scanf("%d %d", &n1, &n2); // n1, n2 변수 값 입력 받고 할당. 
	
	printf("%u\n", (n1 + n2)); // 합 
	printf("%u\n", (n1 - n2)); // 차 
	printf("%u\n", (n1 * n2)); // 곱                      // 출력 
	printf("%u\n", (n1 / n2)); // 몫 
	printf("%u\n", (n1 % n2)); // 나머지값 
	printf("%.2f\n", (float)n1 / n2); // 나눈 값 소수 셋째자리에서 반올림 
	
    return 0; // 0 반환 
 
}




