#define _CRT_SECURE_NO_WARNINGS 1

//1.ģ��ʵ��strcpy
//2.ģ��ʵ��strcat
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void My_strcat(char *dst, const char *src)
{
	assert(dst != NULL);
	assert(src != NULL);
	while (*dst)
	{
		dst++;
	}
	while (*dst = *src)
	{
		*dst++;
		*src++;
	}
}

void My_strcpy(char *dst, const char *src)
{
	assert(dst != NULL);
	assert(src != NULL);
	while (*dst = *src)
	{
		*dst++;
		*src++;
	}
}

int main()
{
	int input = 0;
	char arr1[] = { "i am a student" };
	char arr2[30] = { 0 };
	char arr3[30] = { "she is a doctor" };
	printf("*****1.ʵ��strcpy  2.ʵ��strcat*****\n��ѡ��");
	scanf("%d",&input);
	if (input == 1)
	{
		printf("arr1[]=%s\narr2[]=%s\n", arr1, arr2);
		My_strcpy(arr2, arr1);
		printf("\narr1[]=%s\narr2[]=%s\n", arr1, arr2);
	}
	else if (input == 2)
	{
		printf("arr1[]=%s\narr3[]=%s\n", arr1, arr3);
		My_strcat(arr3, arr1);
		printf("\narr1[]=%s\narr3[]=%s\n", arr1, arr3);
	}

	system("pause");
	return 0;
}
