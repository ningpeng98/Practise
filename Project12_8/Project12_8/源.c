#define _CRT_SECURE_NO_WARNINGS 1
//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	int count = 0;
	for (a = 1; a < 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 1; c < 5; c++)
			{
				if ((a != b) && (a != c) && (b != c))
				{
					printf("%d%d%d ", a, b, c);
					count++;
				}
					
			}
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}
