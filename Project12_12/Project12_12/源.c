#define _CRT_SECURE_NO_WARNINGS 1
//一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6 = 1 + 2 + 3
//找出10000以内的所有完数。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p[80];  
	int i, num, count, s, c = 0;
	int MaxNum = 10000;

	for (num = 2; num < MaxNum; num++)
	{
		count = 0;
		s = num;
		for (i = 1; i < num / 2 + 1; i++)      
		{
			if (num % i == 0)         
			{
				p[count++] = i;      
				s -= i;              
			}
		}
		if (0 == s)
		{
			printf("%d ，因子：", num);
			printf("%d = %d", num, p[0]);  
			for (i = 1; i < count; i++)
				printf("+%d", p[i]);
			printf("\n");
			c++;
		}
	}
	printf("\ncount = %d\n", c);
	system("pause");
	return 0;
}