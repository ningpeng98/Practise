#define _CRT_SECURE_NO_WARNINGS 1
//输入一个字符串，判断其是否为回文。回文字符串是指从左到右读和从右到左读完全相同的字符串。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int i, j;
	printf("输入一段字符串：");
	scanf("%s",&str);
	int len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	if (str[i] != str[j])
		break;
	if (i >= j)
		printf("%s 是回文!\n",str);
	else
		printf("%s 不是回文!\n",str);
	system("pause");
	return 0;
}
