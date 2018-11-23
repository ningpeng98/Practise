#define _CRT_SECURE_NO_WARNINGS 1
//1.编写函数： 
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回 值value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(int num)
{
	int ret = 0;
	int i = 0;
	for (i = 0; i<32; i++)
	{
		ret <<= 1;
		ret |= ((num >> i) & 1);
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("输入需要翻转的数字：");
	scanf("%d",&num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}