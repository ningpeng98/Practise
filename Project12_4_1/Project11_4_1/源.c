#define _CRT_SECURE_NO_WARNINGS 1
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
	printf("��ʼ����");
	Init_arr(arr, sz);
	Print_arr(arr, sz);
	printf("��գ�");
	Empty_arr(arr, sz);
	Print_arr(arr, sz);
	printf("���ã�");
	Reverse_arr(arr, 0, sz - 1);
	Print_arr(arr, sz);
	system("pause");
	return 0;
}