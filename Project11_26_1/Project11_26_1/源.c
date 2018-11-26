#define _CRT_SECURE_NO_WARNINGS 1
//非递归输出前n个斐波那契数
#include<stdio.h>
#include<stdlib.h>
int Fib_num(int n)
{
	int ret = 1;
	int j = 1;
	int k = 1;
	if (n < 3)
		return 1;
	while (n - 2)
	{
		ret = j + k;   //2  3  5  8
		j = k;  //1  2  3
		k = ret;   //2  3  5
		n--;
	}
	return ret;
}

int main()
{
	int n = 0;
	int i = 0;

	//**********************输出第n个斐波那契数***************************
	/*while (1)
	{
		printf("输入n:");
		scanf("%d", &n);
		int ret = Fib_num(n);
		printf("%d\n", ret);
	}*/
	//**********************输出前n个斐波那契数***************************

	while (1)
	{
		printf("输入n:");
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
		{
			int ret = Fib_num(i);
			printf("%d  ", ret);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}