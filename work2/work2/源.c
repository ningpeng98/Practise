#define _CRT_SECURE_NO_WARNINGS 1
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	printf("输入初始num1：");
//	scanf("%d",&num1);
//	printf("输入初始num2：");
//	scanf("%d",&num2);
//	printf("交换中...\n");
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1=%d\nnum2=%d\n",num1,num2);
//	system("pause");
//	return 0;;
//}
////2. 不允许创建临时变量，交换两个数的内容（附加题）
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int num1 = 6;
//	int num2 = 9;
//	printf("输入初始num1：");
//	scanf("%d", &num1);
//	printf("输入初始num2：");
//	scanf("%d", &num2);
//	printf("交换中...\n");
//	num2 = num1 + num2;
//	num1 = num2 - num1;
//	num2 = num2 - num1;
//	printf("num1=%d\nnum2=%d\n", num1, num2);
//	system("pause");
//	return 0;;
//}
////3.求10 个整数中最大值。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10] = {9,6,5,4,21,2,7,8,10,3};
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;;
//}
////4.将三个数按从大到小输出。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int arr[3] = {1,3,2};
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for (j = 0; j < 3; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	system("pause");
//	return 0;
//}
//
////5.求两个数的最大公约数。
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入num1:");
	scanf("%d", &num1);
	printf("输入num2:");
	scanf("%d", &num2);
	int i = 0;
	int tmp = num1;
	if (tmp > num2)
	{
		tmp = num2;
	}	
	for (i = tmp; i>0; i--)
	{
		if (num1%i == 0 && num2%i == 0)
		{
			printf("最大公约数为：%d\n", i);
			break;
		}	
	}
	system("pause");
	return 0;;
}