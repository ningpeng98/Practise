#define _CRT_SECURE_NO_WARNINGS 1
//判断一个素数能被几个9整除
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int m9 = 9, sum = 9;
	int num = 0;
	int n1 = 1;
	int c9 = 1;
	scanf("%d", &num);
	while (n1 != 0)
	{
		if (!(sum%num))
			n1 = 0;
		else
		{
			m9 = m9 * 10;
			sum = sum + m9;
			c9++;
		}
	}
	printf("%ld,can be divided by %d \"9\"", sum, c9);
	system("pause");
	return 0;
}