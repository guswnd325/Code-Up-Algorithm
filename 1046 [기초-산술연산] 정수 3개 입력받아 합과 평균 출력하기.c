#include <stdio.h> // ������� �ҷ����� 

int main(void) { // ���� �Լ� ���� 
	long long int a, b, c, sum;
	float average;

	scanf("%lld %lld %lld", &a, &b, &c);
	sum = (a + b + c);
	printf("%lld\n", sum);
	average = (float)sum / 3;
	printf("%.1f", average);

	return 0; // 0 ��ȯ 

}




