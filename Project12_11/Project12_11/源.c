#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��main�����Ĳ�����ʵ��һ��������������������Խ�����������
//��һ�������� - a��ѡ��ִ�мӷ����� - s��ѡ��ִ�м�����
//�� - m��ѡ��ִ�г˷����� - d��ѡ��ִ�г�����������������Ϊ��������

//���磺�����в������룺test.exe - a 1 2
//ִ��1 + 2���3
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
}
int Div(int x, int y)
{
	return x / y;
}
int main(int argc, char *argv[], char *envp[])
{
	int x = 0;
	int y = 0;
	int ret = 0;
	if (argc != 4)
	{
		printf("��һ����������");
		return 0;
	}
	x = atoi(argv[2]);
	y = atoi(argv[3]);
	switch (*(argv[1] + 1))
	{
	case 'a':
		ret = Add(x, y);
		break;
	case 's':
		ret = Sub(x, y);
		break;
	case 'm':
		ret = Mul(x, y);
		break;
	case 'd':
		ret = Div(x, y);
		break;
	default:
		printf("�ڶ�����������");
		break;
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}