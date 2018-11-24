#define _CRT_SECURE_NO_WARNINGS 
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222 
//分析：（以a=2为例）
//每一位都为上一位（*10+2）
//故主体循环可以为：
//***************************************
//for (i = 0; i < 5; i++)
//{
//	tmp = tmp * 10 + 2;
//	Sn = Sn + tmp;
//}
//***************************************
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int i = 0;
	int tmp = 0;
	int Sn = 0;
	printf("求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和\n");
	while (1)
	{
		printf("输入数字a(0<a<9):");
		scanf("%d", &a);
		if (a > 0 && a < 9)
		{
			for (i = 0; i < 5; i++)
			{
				tmp = tmp * 10 + a;
				Sn = Sn + tmp;
			}
			printf("%d\n", Sn);
		}
		else
		{
			printf("重新输入a(0<a<9)\n");
		}		
	}
	system("pause");
	return 0;
}