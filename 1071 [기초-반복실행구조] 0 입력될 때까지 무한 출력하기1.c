#include <stdio.h> // ������� �ҷ����� 


int main(void) { // ���� �Լ� ���� 
	int a; // ������ a ���� ����
re: 
	scanf("%d", &a);
	if (a != 0) {
		printf("%d\n", a);
		goto re;
	}
	else {
		return 0; // 0 ��ȯ d
	}
}




