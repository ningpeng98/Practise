#define _CRT_SECURE_NO_WARNINGS 1
//��һ���������ֽ������������磺����90, ��ӡ��90 = 2 * 3 * 3 * 5��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	printf("\n��������:\n");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if (n%i == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d", n);
	system("pause");
	return 0;
}
