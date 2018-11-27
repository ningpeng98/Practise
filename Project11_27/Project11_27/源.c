#define _CRT_SECURE_NO_WARNINGS 1
//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 2, b = 1, c, n, i;
	double s = 0;
	scanf("%d", &n);
	if (n>10 || n<1)return 0;
	for (i = 1; i <= n; i++)
	{
		s += (1.0*a / b);
		c = b;
		b = a;
		a = a + c;
	}
	printf("%.6f\n", s);
	system("pause");

	return 0;

}