#define _CRT_SECURE_NO_WARNINGS 1
//�������������Լ��
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("����num1:");
	scanf("%d", &num1);
	printf("����num2:");
	scanf("%d", &num2);
	int i = 0;
	int tmp = num1;
	if (tmp > num2)
	{
		tmp = num2;
	}
	for (i = tmp; i>0; i--)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			printf("���Լ��Ϊ��%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;;
}