#define _CRT_SECURE_NO_WARNINGS 1
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1 + 2 + 3
//�ҳ�10000���ڵ�����������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p[80];  
	int i, num, count, s, c = 0;
	int MaxNum = 10000;

	for (num = 2; num < MaxNum; num++)
	{
		count = 0;
		s = num;
		for (i = 1; i < num / 2 + 1; i++)      
		{
			if (num % i == 0)         
			{
				p[count++] = i;      
				s -= i;              
			}
		}
		if (0 == s)
		{
			printf("%d �����ӣ�", num);
			printf("%d = %d", num, p[0]);  
			for (i = 1; i < count; i++)
				printf("+%d", p[i]);
			printf("\n");
			c++;
		}
	}
	printf("\ncount = %d\n", c);
	system("pause");
	return 0;
}