#define _CRT_SECURE_NO_WARNINGS 1
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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