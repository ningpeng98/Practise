#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
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
		else if (input >= 0 && input <= 4)
		{
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			switch (input)
			{
			case 1:
				ret = Add(x, y);
				break;
			case 2:
				ret = Sub(x, y);
				break;
			case 3:
				ret = Mul(x, y);
				break;
			case 4:
				ret = Div(x, y);
				break;
			}
			printf("ret=%d\n", ret);
		}
		else
			printf("输入错误，请重新输入！");
	}
	system("pause");
	return 0;
}