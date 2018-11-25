#define _CRT_SECURE_NO_WARNINGS 1
//递归求n^k
#include<stdio.h>
#include<stdlib.h>
int N_K(int n,int k)
{
	if (n == 0)
	{
		printf("ERROR:n不能为0\n");
		return -1;
	}	
	if ((n == 1) & (k == 0))
		return 1;
	else if (k == 1)
		return n; 
	else
		return n*N_K(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	while (1)
	{
		printf("输入n,k:");
		scanf("%d%d", &n,&k);
		int ret = N_K(n,k);
		printf("%d^%d = %d\n",n,k, ret);
	}
	system("pause");
	return 0;
}