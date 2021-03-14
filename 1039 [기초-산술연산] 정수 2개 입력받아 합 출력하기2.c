#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	long long int Num1, Num2; // long long int형 변수 Num1, Num2 선언 
	scanf("%lld %lld", &Num1, &Num2); // lld 입력을 받은 후 변수에 각각 저장
	printf("%lld", (Num1 + Num2)); // %d안에 Num1+Num2값을 출력하도록함. 
	
    return 0; // 0 반환 
 
}



