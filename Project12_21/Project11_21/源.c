#define _CRT_SECURE_NO_WARNINGS 1
//1-100��������˶��ٴ�����9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		else if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n9���ֵĴ���Ϊ��%d\n", count);
	system("pause");
	return 0;
}