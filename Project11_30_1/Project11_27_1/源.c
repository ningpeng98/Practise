#define _CRT_SECURE_NO_WARNINGS 1
//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int i = 0;
	printf("����num:");
	scanf("%d",&num);
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");

	system("pause");
	return 0;
}