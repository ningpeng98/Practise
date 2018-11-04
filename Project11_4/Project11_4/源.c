#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };     //转移表
	while (input)
	{
		printf("-------------------------\n");
		printf("|    1.+       2.-      |\n");
		printf("|    3.*       4./      |\n");
		printf("|    0.退出程序         |\n");
		printf("-------------------------\n");
		printf("请选择操作：");
		scanf("%d", &input);
		if (input == 0)
			return;
		else if (input >= 1 && input <= 4)
		{
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("输入错误，请重新输入。\n");
		}
	}
	system("pause");
	return 0;
}
