#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ������ж����Ƿ�Ϊ���ġ������ַ�����ָ�����Ҷ��ʹ��ҵ������ȫ��ͬ���ַ�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int i, j;
	printf("����һ���ַ�����");
	scanf("%s",&str);
	int len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	if (str[i] != str[j])
		break;
	if (i >= j)
		printf("%s �ǻ���!\n",str);
	else
		printf("%s ���ǻ���!\n",str);
	system("pause");
	return 0;
}
