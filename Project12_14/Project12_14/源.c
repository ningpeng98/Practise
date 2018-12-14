#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...求出这个数列的前20项之和。
int main()
{
	float n, t, number = 20;
	float a = 2, b = 1, s = 0;
	for (n = 1; n <= number; n++)
	{
		s = s + a / b;
		t = a; 
		a = a + b;
		b = t;
	}
	printf("sum is %f\n", s);
	system("pause");
	return 0;
}
