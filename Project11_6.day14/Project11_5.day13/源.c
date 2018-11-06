//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
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
	printf("输入字符串：");
	scanf("%s", &a);
	printf("原字符串为：%s\n", a);
	int len = strlen(a);
loop:
	printf("输入需要左旋的位数：");
	scanf("%d", &num);
	if (num <= len)
	{
		Left_move(a, num);
		printf("左旋后字符串为：%s\n", a);
	}
	else
	{
		printf("输入错误，请重新输入\n");
		goto loop;
	}
}
void Test2()
{
	char a[30];
	char b[30];
	printf("输入初始字符串：");
	scanf("%s", &a);
	printf("输入待比较字符串：");
	scanf("%s", &b);
	int ret = Is_left_move(a, b);
	if (ret == 1)
		printf("字符串b是字符串a左移后的字符串！\n");
	else
		printf("字符串b不是字符串a左移后的字符串!\n");

}
int main()
{
	int input = 0;
	while (1)
	{
		printf("----------------------------------------------------------\n");
		printf("|1.左旋字符串中的k个字符。                               |\n");        
		printf("|2.判断一个字符串是否为另外一个字符串旋转之后的字符串。  |\n");
		printf("|3.退出。                                                |\n");
		printf("----------------------------------------------------------\n");
		printf("请选择：");
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
			printf("输入错误，请重新选择！\n");
			break;
		}
	}
	system("pause");
	return 0;
}



//未实现：
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