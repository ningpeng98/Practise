#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//
//
////1.дһ���������ز����������� 1 �ĸ���
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int num = 15;
//	int count = 0;
//	int i = 0;
//	while (num)
//	{
//		num = (num&(num - 1));
//		count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//
//}
//
//
////����������
//#include<stdio.h>
//#include<windows.h>
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1);
//		count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = -1;
//	int ret = count_one_bits(num);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//
////2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int num = 5654;
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	getchar();
//	return 0;
//}
//
////3. ���һ��������ÿһλ��
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	int n = 0;
	printf("����һ����λ����");
	scanf("%d", &n);
	printf("��λΪ��%d\nʮλΪ��%d\n��λΪ��%d\n \n", n / 100, n % 100 / 10, n % 100 % 10);
	system("pause");
	return 0;
}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//#include<stdio.h>
//#include<windows.h>
//	   int calc_diff_bit(int m, int n)
//{
//		   int tmp = m^n;
//		   int count = 0;
//		   while (tmp)
//		   {
//			   tmp = tmp&(tmp - 1);
//			   count++;
//		   }
//		   return count;
//	   }
//int main()
//{
//	int m = 2299;
//	int n = 1999;
//	int ret = calc_diff_bit(m, n);
//	{
//		printf("%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}