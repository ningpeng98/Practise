#define _CRT_SECURE_NO_WARNINGS 1
//1.递归和非递归分别实现求第n个斐波那契数。
//递归斐波那契数
//#include<stdio.h>
//#include<windows.h>
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return	Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("需要求第几个斐波那契数？\n");
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("第%d个斐波那契数为：%d\n", n, ret);
//	system(" pause");
//	return 0;
//}

//非递归斐波那契数
#/*include<stdio.h>
#include<windows.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("需要求第几个斐波那契数？\n");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数为：%d\n", n, ret);
	system(" pause");
	return 0;
}*/


//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>
#include<windows.h>
int  DigitSum(int n)
{
	if (n < 10)
		return n;
	else
		return (n % 10) + DigitSum(n / 10);   //1729->9+ DigitSum(172)——2+ DigitSum(17)——7+ DigitSum(1)——1
}
int main()
{
	int n = 0;
	printf("请输入整数");
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system(" pause");
	return 0;
}
