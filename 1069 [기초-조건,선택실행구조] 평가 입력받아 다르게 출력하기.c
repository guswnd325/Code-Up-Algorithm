/* �� ����
�� : ����
A : best!!!
B : good!!
C : run!
D : slowly~
������ ���ڵ� : what? */

#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
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
	
	return 0; // 0 ��ȯ 

}




