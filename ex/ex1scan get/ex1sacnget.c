#include <stdio.h>

int main(void)
{

	int age = 0;
	char name[32] = { 0 };
	
	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d%*c", &age);

	printf("�̸��� �Է��ϼ���. : ");
	gets_s(name, sizeof(name));

	printf("����� ���̴� %d���̰� �̸��� %s �Դϴ�.\n", age, name);
	 
	return 0;
}