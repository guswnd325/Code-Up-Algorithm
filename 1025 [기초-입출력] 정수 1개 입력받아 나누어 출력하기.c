#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	int Number1,Number2,Number3,Number4,Number5; // ������ ���� ���� 
	scanf("%1d%1d%1d%1d%1d", &Number1, &Number2, &Number3, &Number4, &Number5); //  1���ھ� ���� ������ �Ҵ�. 
	
	printf("[%d]\n", (Number1 * 10000)); // ��� 
	printf("[%d]\n", (Number2 * 1000)); 
	printf("[%d]\n", (Number3 * 100));
	printf("[%d]\n", (Number4 * 10));
	printf("[%d]\n", (Number5 * 1));
	
    return 0; // 0 ��ȯ 
 
}



