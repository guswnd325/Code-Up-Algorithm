#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 1 && b== 0 || b == 1 && a ==0) {
		printf("1");
	}
	else {
		printf("0");
	}



	return 0; // 0 ��ȯ 

}




