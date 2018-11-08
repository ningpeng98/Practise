#define _CRT_SECURE_NO_WARNINGS 1
//1.不使用（a + b） / 2这种方式，求两个数的平均值。

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	c = (a&b) + ((a^b) >> 1);
//	printf("%d\n", c);
//	system("pause");
//	return 0;;
//}

//2.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {1,2,3,4,5,4,3,2,1};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
}