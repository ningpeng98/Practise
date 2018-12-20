#define _CRT_SECURE_NO_WARNINGS 1
//求两个数的最大公约数
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入num1:");
	scanf("%d", &num1);
	printf("输入num2:");
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
			printf("最大公约数为：%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;;
}