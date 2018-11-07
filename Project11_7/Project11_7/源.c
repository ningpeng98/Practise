#define _CRT_SECURE_NO_WARNINGS 1
//2.杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int search = 0;
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("输入需要查找的数：");
	scanf("%d",&search);
	if ((search < arr[0][0]) || (search > arr[2][2]))
	{
		printf("%d不在数组中！\n", search);
	}
	else
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (search == arr[i][j])
					printf("%d在数组的第%d行第%d列！",search,i+1,j+1);
			}
			printf("\n");
		}
	}	
	system("pause");
	return 0;
}

//时间复杂度小于O(N);


//1.调整数组使奇数全部都位于偶数前面。
//#include<stdio.h>
//#include<stdlib.h>
//void Rank(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//			printf("%-2d",arr[i]);	
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%-2d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Rank(arr,sz);
//	system("pause");
//	return 0;
//}