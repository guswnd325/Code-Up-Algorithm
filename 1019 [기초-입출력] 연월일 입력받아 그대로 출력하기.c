#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
 
    int Year, Month, Day; // ������ ���� Year, Month, Day ����. 
    scanf("%d.%d.%d", &Year, &Month, &Day); // %d.%d.%d���·� ������ ������ �ް� �Ҵ���. 
    printf("%04d.%02d.%02d", Year, Month, Day); // %04d = 4�ڸ����Ҵ�. ������� 0���� ġȯ�� �����. 
    return 0; // 0 ��ȯ  
 
}


