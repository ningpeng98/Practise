#define _CRT_SECURE_NO_WARNINGS 1
//递归查找第n个斐波那契数
#include<stdio.h>
#include<stdlib.h>
int Fib_num(int n)
{
	if (n < 3)
		return 1;
	else
		return Fib_num(n - 1) + Fib_num(n - 2);
}
int main()
{
	int n = 0;
	while (1)
	{
		printf("输入n:");
		scanf("%d", &n);
		int ret = Fib_num(n);
		printf("Fib_num(%d) = %d\n",n, ret);
	}
	system("pause");
	return 0;
}