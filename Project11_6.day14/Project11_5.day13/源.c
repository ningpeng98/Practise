//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void Swap(char* left, char* right)
{
	assert(left!=NULL);
	assert(right!=NULL);
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		*left++;
		*right--;
	}
}
Left_move(char *str, int num)
{
	int len = strlen(str);
	Swap(str,str+num-1);
	Swap(str + num, str + len - 1);
	Swap(str,str+len-1);
}
int Is_left_move(char *src, const char *dest)
{
	if (strlen(dest) != strlen(src))
	{
		return 0;
	}
	strncat(src, src, strlen(src));
	if (strstr(src, dest) != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Test1()
{
	char a[30];
	int num = 0;
	printf("�����ַ�����");
	scanf("%s", &a);
	printf("ԭ�ַ���Ϊ��%s\n", a);
	int len = strlen(a);
loop:
	printf("������Ҫ������λ����");
	scanf("%d", &num);
	if (num <= len)
	{
		Left_move(a, num);
		printf("�������ַ���Ϊ��%s\n", a);
	}
	else
	{
		printf("�����������������\n");
		goto loop;
	}
}
void Test2()
{
	char a[30];
	char b[30];
	printf("�����ʼ�ַ�����");
	scanf("%s", &a);
	printf("������Ƚ��ַ�����");
	scanf("%s", &b);
	int ret = Is_left_move(a, b);
	if (ret == 1)
		printf("�ַ���b���ַ���a���ƺ���ַ�����\n");
	else
		printf("�ַ���b�����ַ���a���ƺ���ַ���!\n");

}
int main()
{
	int input = 0;
	while (1)
	{
		printf("----------------------------------------------------------\n");
		printf("|1.�����ַ����е�k���ַ���                               |\n");        
		printf("|2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����  |\n");
		printf("|3.�˳���                                                |\n");
		printf("----------------------------------------------------------\n");
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Test1();
			break;
		case 2:
			Test2();
			break;
		case 3:
			return 0;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	}
	system("pause");
	return 0;
}



//δʵ�֣�
//int Is_left_move(char *src, const char *dest)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	int i = 0;
//	int len = strlen(src);
//	if (strlen(src) != strlen(dest))
//	{
//		return 0;
//
//	}
//	while (i!=NULL && i<=len)
//	{
//		Left_move(src, i);	
//		i++;
//		if (strcmp(dest, src) == 0)
//		{
//			return 1;
//		}
//	}
//}