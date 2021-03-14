/* 평가 기준
    점수 범위 : 평가
    90  ~  100 : A
    70  ~   89 : B
    40  ~   69 : C
     0  ~   39 : D
로 평가되어야 한다. */
#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	int score;
	scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A");
    }
    if (score >= 70 && score <= 89) {
        printf("B");
    }
    if (score >= 40 && score <= 69) {
        printf("C");
    }
    if (score > 0 && score < 40 || score == 0) {
        printf("D");
    }
	
	return 0; // 0 반환 

}




