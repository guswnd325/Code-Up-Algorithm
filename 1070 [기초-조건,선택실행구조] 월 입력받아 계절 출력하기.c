/* 12, 1, 2 : winter
  3, 4, 5 : spring
  6, 7, 8 : summer
  9, 10, 11 : fall */

#include <stdio.h> // ������� �ҷ����� 


int main(void) { // ���� �Լ� ���� 
	int season;
	scanf("%d", &season);

	switch (season) {
	case 12:
	case 1:
	case 2:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	default: 
		break;
	}


	
	
	return 0; // 0 ��ȯ 

}




