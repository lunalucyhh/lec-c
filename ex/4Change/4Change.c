#include <stdio.h>

int main(void)
{
	int a, b = 0;
	printf("���� 2���� �Է��ϼ���: ");
	scanf_s("%d%d", &a, &b);
	int tmp = 0;

	tmp = a;

	a = b;
	b = tmp;

	printf("a:%d, b:%d\n", a, b);

	return 0;
}