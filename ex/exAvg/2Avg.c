#include <stdio.h>

int main(void)
{
	int a, b = 0;

	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d%d", &a, &b);
	
	double avg = 0.0;
	avg = (a + b) / 2.0;
	printf("AVG: %.2f", avg);
	
	return 0;
}