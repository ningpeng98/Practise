#define _CRT_SECURE_NO_WARNINGS 1
//使用main函数的参数，实现一个整数计算器，程序可以接受三个参数
//第一个参数“ - a”选项执行加法，“ - s”选项执行减法，
//“ - m”选项执行乘法，“ - d”选项执行除法，后面两个参数为操作数。

//例如：命令行参数输入：test.exe - a 1 2
//执行1 + 2输出3
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
}
int Div(int x, int y)
{
	return x / y;
}
int main(int argc, char *argv[], char *envp[])
{
	int x = 0;
	int y = 0;
	int ret = 0;
	if (argc != 4)
	{
		printf("第一个参数有误");
		return 0;
	}
	x = atoi(argv[2]);
	y = atoi(argv[3]);
	switch (*(argv[1] + 1))
	{
	case 'a':
		ret = Add(x, y);
		break;
	case 's':
		ret = Sub(x, y);
		break;
	case 'm':
		ret = Mul(x, y);
		break;
	case 'd':
		ret = Div(x, y);
		break;
	default:
		printf("第二个参数有误");
		break;
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}