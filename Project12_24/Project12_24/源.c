#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(A) / sizeof(A[0]) - 1;
	printf("��ʼAΪ:");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n��ʼBΪ:");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n������...\n");
	for (i = 0; i <= sz; i++)
	{
		int tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}
	printf("����AΪ��");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n����BΪ��");
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}