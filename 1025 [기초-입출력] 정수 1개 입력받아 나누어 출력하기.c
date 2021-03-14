#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int Number1,Number2,Number3,Number4,Number5; // 정수형 변수 선언 
	scanf("%1d%1d%1d%1d%1d", &Number1, &Number2, &Number3, &Number4, &Number5); //  1글자씩 각각 변수에 할당. 
	
	printf("[%d]\n", (Number1 * 10000)); // 출력 
	printf("[%d]\n", (Number2 * 1000)); 
	printf("[%d]\n", (Number3 * 100));
	printf("[%d]\n", (Number4 * 10));
	printf("[%d]\n", (Number5 * 1));
	
    return 0; // 0 반환 
 
}



