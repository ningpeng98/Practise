#define _CRT_SECURE_NO_WARNINGS 1
//1.模拟实现strncpy 
//2.模拟实现strncat
//3.模拟实现strncmp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char *My_strncpy(char *dst,const char *src, int num)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (num--)
	{
		if (*src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
		}
	/*	else
		{
			*dst = '0';
			dst++;
			
		}*/
		

	}
	dst = NULL;
	return ret;
}
char *My_strncat(char *dst, const char *src, int num)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (num--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	//dst = NULL;
	return ret;
}
int My_strncmp(const char *str1, const char *str2, int num)
{
	assert(str1);
	assert(str2);
	while (num--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			break;
	}
	if ((*(unsigned char *)str1 - *(unsigned char *)str2) > 0)
		return 1;
	else if ((*(unsigned char *)str1 - *(unsigned char *)str2) < 0)
		return -1;
	else
		return 0;
}

int main()
{
	char arr1[] = "I am a student";
	char arr2[50]="0";
	char arr3[50] = "hello,world!";
	int num = 0;
	while (1)
	{
		printf("输入num(输入-1退出):");
		scanf("%d", &num);
		if (num == -1)
			break;
		printf("arr1[] = %s\narr2[] = %s\narr3[] = %s\nnum = %d\n", arr1, arr2, arr3, num);
		printf("***************************************************************\nstrncpy:\n");
		printf("strncpy(arr2, arr1, num) = %s\n", strncpy(arr2, arr1, num));
		printf("My_strncpy(arr2, arr1, num) = %s\n", My_strncpy(arr2, arr1, num));
		printf("***************************************************************\nstrncat:\n");
		printf("strncat(arr3, arr1, num) = %s\n", strncat(arr3, arr1, num));
		printf("My_strncat(arr3, arr1, num) = %s\n", My_strncat(arr3, arr1, num));
		printf("***************************************************************\nstrncmp:\n");
		printf("strncmp(arr3, arr1, num) = %d\n", strncmp(arr3, arr1, num));
		printf("My_strncmp(arr3, arr1, num) = %d\n", My_strncmp(arr3, arr1, num));
		//printf("strncmp(arr3, arr1, num) = %d\n", strncmp(arr3, arr1, num));
	}
	system("pause");
	return 0;
}
