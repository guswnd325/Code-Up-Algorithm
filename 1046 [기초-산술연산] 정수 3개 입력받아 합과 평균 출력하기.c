#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	long long int a, b, c, sum;
	float average;

	scanf("%lld %lld %lld", &a, &b, &c);
	sum = (a + b + c);
	printf("%lld\n", sum);
	average = (float)sum / 3;
	printf("%.1f", average);

	return 0; // 0 반환 

}




