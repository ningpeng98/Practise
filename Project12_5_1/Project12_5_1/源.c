#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��deblank����һ���ַ�����ȥ������Ŀո�
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void My_deblank(char  *str)
{
	assert(str);
	while (*str)
	{
		if (*str == ' ')
		{
			str++;
			while (*str&&*str == ' ')
			{
				str++;
				*str = *(str + 1);
			}
		}
		else
			str++;
	}


}
int main()
{
	char arr[] = "a aa    bb b  ccc dd d";
	printf("%s\n",arr);
	My_deblank(arr);
	printf("%s\n", arr);

	system("pause");
	return 0;
}