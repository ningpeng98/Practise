#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1);
		count++;
		n = n / 2;
	}
	return count;
}
int main()
{
	int input;
	printf(" ‰»Î£∫");
	scanf("%d",&input);
	int ret = count_one_bits(input);
	printf(" %d one bit = %d \n",input, ret);
	system("pause");
	return 0;
}