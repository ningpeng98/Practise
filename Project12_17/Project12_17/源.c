#define _CRT_SECURE_NO_WARNINGS 1
//�˽���ת��Ϊʮ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p, s[6]; int n;
	p = s;
	gets(p);
	n = 0;
	while (*(p) != '\0')
	{
		n = n * 8 + *p - '0';
		p++;
	}
	printf("%d", n);
	system("pause");
	return 0;
}