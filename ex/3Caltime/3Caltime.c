#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("�ʸ� �Է����ּ���: ");
	scanf_s("%d", &input);

	int hour, min, sec = 0;
	 
	min = input / 60;
	sec = input % 60;

	hour = min / 60; 
	min = min % 60;

	printf("%d�ʴ� %02d�ð�: %02d��: %02d�� �Դϴ�.\n", 
		input,
		hour,
		min,
		sec);

	return 0;
}  