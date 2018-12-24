#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(A) / sizeof(A[0]) - 1;
	printf("初始A为:");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n初始B为:");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n交换中...\n");
	for (i = 0; i <= sz; i++)
	{
		int tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}
	printf("数组A为：");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n数组B为：");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}