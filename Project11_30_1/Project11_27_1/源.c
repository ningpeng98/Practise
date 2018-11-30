#define _CRT_SECURE_NO_WARNINGS 1
//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int i = 0;
	printf("输入num:");
	scanf("%d",&num);
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");

	system("pause");
	return 0;
}