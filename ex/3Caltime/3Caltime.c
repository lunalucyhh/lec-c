#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("초를 입력해주세요: ");
	scanf_s("%d", &input);

	int hour, min, sec = 0;
	 
	min = input / 60;
	sec = input % 60;

	hour = min / 60; 
	min = min % 60;

	printf("%d초는 %02d시간: %02d분: %02d초 입니다.\n", 
		input,
		hour,
		min,
		sec);

	return 0;
}  