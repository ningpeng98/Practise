#define _CRT_SECURE_NO_WARNINGS 1
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
#include<stdio.h>
#include<stdlib.h>
void Init_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 1;
	}
}
void Print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void Empty_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}
void Reverse_arr(int arr[], int left, int right)
{
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始化：");
	Init_arr(arr, sz);
	Print_arr(arr, sz);
	printf("清空：");
	Empty_arr(arr, sz);
	Print_arr(arr, sz);
	printf("逆置：");
	Reverse_arr(arr, 0, sz - 1);
	Print_arr(arr, sz);
	system("pause");
	return 0;
}