/* �� ����
    ���� ���� : ��
    90  ~  100 : A
    70  ~   89 : B
    40  ~   69 : C
     0  ~   39 : D
�� �򰡵Ǿ�� �Ѵ�. */
#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	int score;
	scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A");
    }
    if (score >= 70 && score <= 89) {
        printf("B");
    }
    if (score >= 40 && score <= 69) {
        printf("C");
    }
    if (score > 0 && score < 40 || score == 0) {
        printf("D");
    }
	
	return 0; // 0 ��ȯ 

}




