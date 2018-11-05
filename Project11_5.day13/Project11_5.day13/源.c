#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//	printf("输入字符串：");
//	scanf("%s",&a);
//	printf("原字符串为：%s\n",a);
//	int len = strlen(a);
//	loop:
//	printf("输入需要左旋的位数：");
//	scanf("%d", &num);
//	if (num <= len)
//	{
//		Left_move(a, num,len);
//		printf("左旋后字符串为：%s\n", a);
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto loop;
//	}
//	system("pause");
//	return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
