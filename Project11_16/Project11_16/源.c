#define _CRT_SECURE_NO_WARNINGS 1
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 3, 1, 2, 7, 8, 9, 6, 7, 9,0 };//4,5 ,8,6,0
	//int arr[] = {1,2,3,1,2,1};
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d \n", sz);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == 0)
			printf("%d ",arr[i]);
	}
	//挑出数组中原本的0
	for (i = 0; i < sz; i++)
	{
		for (j = 1; j < sz-i; j++)
		{
			if ((arr[i] == arr[i+j]) )
			{
				arr[i] = 0;
				arr[i+j] = 0;
			}
		}
	}
	/*for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			if ((arr[i] == arr[j]) && (i != j))
			{
				arr[i] = 0;
				arr[j] = 0;
			}
		}	
	}*/
	for (i = 0; i < sz; i++)
	{
		if (arr[i] != 0)
			printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。(39)
//编程实现。
//#include<stdio.h>
//#include<stdlib.h>
//int  main()
//{
//	int money = 20;
//	int num = 0;
//	int tmp = 0;
//	num = money;
//	tmp = money;
//	while (tmp > 1)
//	{
//		num = num + tmp / 2;
//		tmp = tmp / 2 + tmp % 2;
//	}
//	printf("%d ",num);
//	system("pause");
//	return 0;
//}