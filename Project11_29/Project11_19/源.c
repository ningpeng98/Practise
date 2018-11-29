#define _CRT_SECURE_NO_WARNINGS 1
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}

int count_one(int input)
{
	int count = 0;
	while (input)
	{
		input = input&(input - 1);
		count++;
	}
	return count;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input;
	printf("输入数字：");
	scanf("%d",&input);
	int num = count_one(input);
	printf("%d one bit = %d",input,num);
	system("pause");
	return 0;
}
