#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//
//
////1.写一个函数返回参数二进制中 1 的个数
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int num = 15;
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		num = (num&(num - 1));
//		count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//
//}
//
//
////函数方法：
//#include<stdio.h>
//#include<windows.h>
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1);
//		count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = -1;
//	int ret = count_one_bits(num);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//
////2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int num = 5654;
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	getchar();
//	return 0;
//}
//
////3. 输出一个整数的每一位。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	int n = 0;
	printf("输入一个三位数：");
	scanf("%d", &n);
	printf("百位为：%d\n十位为：%d\n个位为：%d\n \n", n / 100, n % 100 / 10, n % 100 % 10);
	system("pause");
	return 0;
}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//#include<stdio.h>
//#include<windows.h>
//	   int calc_diff_bit(int m, int n)
//{
//		   int tmp = m^n;
//		   int count = 0;
//		   while (tmp)
//		   {
//			   tmp = tmp&(tmp - 1);
//			   count++;
//		   }
//		   return count;
//	   }
//int main()
//{
//	int m = 2299;
//	int n = 1999;
//	int ret = calc_diff_bit(m, n);
//	{
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}