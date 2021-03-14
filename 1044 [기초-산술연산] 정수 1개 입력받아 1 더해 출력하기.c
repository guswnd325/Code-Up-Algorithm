#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	long long int a; // 정수형 변수 a,b 선언. 수의 범위가 넓으므로 long long int형을 사용해 오버플로우가 나지않도록함. 
	
	scanf("%lld", &a); // a변수의 값을 입력받고 할당함. 
	
	printf("%lld", (a + 1)); // a변수에 1을 더한 값을출력함. 
	
    return 0; // 0 반환 
 
}




