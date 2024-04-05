#include <stdio.h>

int main(void)
{
	int a, b = 0;
	printf("변수 2개를 입력하세요: ");
	scanf_s("%d%d", &a, &b);
	int tmp = 0;

	tmp = a;

	a = b;
	b = tmp;

	printf("a:%d, b:%d\n", a, b);

	return 0;
}