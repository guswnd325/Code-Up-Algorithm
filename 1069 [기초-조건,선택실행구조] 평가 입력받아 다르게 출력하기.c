/* 평가 내용
평가 : 내용
A : best!!!
B : good!!
C : run!
D : slowly~
나머지 문자들 : what? */

#include <stdio.h> // 헤더파일 불러오기 

int main(void) { // 메인 함수 실행 
	char alphabet;
	scanf("%c", &alphabet);

	switch (alphabet) {
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
		break;
	}
	
	return 0; // 0 반환 

}




