#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//void Swap(char* left, char* right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		*left++;
//		*right--;
//	}
//}
//Left_move(char *str, int num,int len)
//{
//	/*int len = strlen(str);*/
//	Swap(str,str+num-1);
//	Swap(str + num, str + len - 1);
//	Swap(str,str+len-1);
//}
//int main()
//{
//	char a[30];
//	int num = 0;
//
//	printf("�����ַ�����");
//	scanf("%s",&a);
//	printf("ԭ�ַ���Ϊ��%s\n",a);
//	int len = strlen(a);
//	loop:
//	printf("������Ҫ������λ����");
//	scanf("%d", &num);
//	if (num <= len)
//	{
//		Left_move(a, num,len);
//		printf("�������ַ���Ϊ��%s\n", a);
//	}
//	else
//	{
//		printf("�����������������\n");
//		goto loop;
//	}
//	system("pause");
//	return 0;
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
