#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
 
    char Text[2001]; // ������ ���� Text ���� �� 2000�� ũ�� �Ҵ�. 
    fgets (Text, 2000, stdin); // fgets�� ���� ���������� ���ڵ� ����� �� �� ����.  
    printf("%s", Text); // ���ڿ��� �����. %s = ���ڿ� 
    return 0; // 0 ��ȯ 
 
}


