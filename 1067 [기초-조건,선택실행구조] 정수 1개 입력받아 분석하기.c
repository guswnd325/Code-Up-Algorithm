#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
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
	return 0; // 0 ��ȯ 

}




