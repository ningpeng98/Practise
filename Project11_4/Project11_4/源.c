#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };     //ת�Ʊ�
	while (input)
	{
		printf("-------------------------\n");
		printf("|    1.+       2.-      |\n");
		printf("|    3.*       4./      |\n");
		printf("|    0.�˳�����         |\n");
		printf("-------------------------\n");
		printf("��ѡ�������");
		scanf("%d", &input);
		if (input == 0)
			return;
		else if (input >= 1 && input <= 4)
		{
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else
		{
			printf("����������������롣\n");
		}
	}
	system("pause");
	return 0;
}
