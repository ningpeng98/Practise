#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 1, j = 1;
	int arr[20][20] = { 0 };
	printf("ȷ��Ҫ�����������");
	scanf("%d", &line);
	arr[0][0] = 1;
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}