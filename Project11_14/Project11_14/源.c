#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ݹ�쳲�������
//#include<stdio.h>
//#include<windows.h>
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return	Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("��Ҫ��ڼ���쳲���������\n");
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("��%d��쳲�������Ϊ��%d\n", n, ret);
//	system(" pause");
//	return 0;
//}

//�ǵݹ�쳲�������
#/*include<stdio.h>
#include<windows.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("��Ҫ��ڼ���쳲���������\n");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("��%d��쳲�������Ϊ��%d\n", n, ret);
	system(" pause");
	return 0;
}*/


//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include<stdio.h>
#include<windows.h>
int  DigitSum(int n)
{
	if (n < 10)
		return n;
	else
		return (n % 10) + DigitSum(n / 10);   //1729->9+ DigitSum(172)����2+ DigitSum(17)����7+ DigitSum(1)����1
}
int main()
{
	int n = 0;
	printf("����������");
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system(" pause");
	return 0;
}
