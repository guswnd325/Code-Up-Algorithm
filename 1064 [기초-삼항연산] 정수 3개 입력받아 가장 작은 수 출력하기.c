#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && a < c) { // a�� b���� �۰� c������
		printf("%d", a);
	}
	else if (b < a && b < c) {
		printf("%d", b);
	}
	else {
		printf("%d", c);
	}
	return 0; // 0 ��ȯ 

}




