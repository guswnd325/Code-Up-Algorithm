#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	unsigned int n1, n2; // ������ ���� n1, n2 ����
	scanf("%d %d", &n1, &n2); // n1, n2 ���� �� �Է� �ް� �Ҵ�. 
	
	printf("%u\n", (n1 + n2)); // �� 
	printf("%u\n", (n1 - n2)); // �� 
	printf("%u\n", (n1 * n2)); // ��                      // ��� 
	printf("%u\n", (n1 / n2)); // �� 
	printf("%u\n", (n1 % n2)); // �������� 
	printf("%.2f\n", (float)n1 / n2); // ���� �� �Ҽ� ��°�ڸ����� �ݿø� 
	
    return 0; // 0 ��ȯ 
 
}




