#define _CRT_SECURE_NO_WARNINGS 1
//1.调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include<stdio.h>
#include<stdlib.h>
void Rank(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%-3d",arr[i]);
		}
	}
	for (j = 0; j < sz; j++)
	{
		if (arr[j] % 2 == 0)
		{
			printf("%-3d", arr[j]);
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int j = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%-3d",arr[i]);
	}
	printf("\n");
	Rank(arr,sz);
	system("pause");
	return 0;
}
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9