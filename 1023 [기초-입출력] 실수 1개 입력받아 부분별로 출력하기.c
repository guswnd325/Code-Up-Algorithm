#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
 	int number; // ������ ���� number ����. 
    float actualnumber; // �Ǽ��� ����  actualnumber ���� 
    scanf("%d.%f", &number, &actualnumber); // scanf�Լ��� ���� �Ҽ����·� ������ ���� �Ҵ���. 
    printf("%d\n%.0f", number, actualnumber); //  �����ڸ��� ����� �ٹٲ۵� �Ҽ����� ��� �ִ� ������ actualnumber�� �Ҽ��� 0������Ÿ���� �����.  
    return 0; // 0 ��ȯ 
 
}


