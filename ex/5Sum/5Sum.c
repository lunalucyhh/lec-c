#include <stdio.h>

int main(void)
{
	int input, sum = 0;;

	scanf_s("%d", &input);
	sum += input;
	
	scanf_s("%d", &input);
	sum += input;

	scanf_s("%d", &input);
	sum += input;

	printf("Total: %d", sum);
	
	return 0;
	
 }