#define _CRT_SECURE_NO_WARNINGS 1
//0.实现strlen
//1.实现strcpy
//2.实现strcat
//3.实现strstr
//4.实现strchr
//5.实现strcmp
//6.实现memcpy
//7.实现memmove
//
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


int My_strlen1(char *str)     //方法1:计数器求strlen
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int My_strlen2(char *str)      //方法2：递归方法求strlen
{
	assert(str);
	if (*str == '\0')
		return 0;
	else
		return 1 + My_strlen2(str+1);
}
int My_strlen3(char *str)           //方法3：尾指针-头指针方法求strlen
{
	assert(str);
	char *p = str;
	while (*p != '\0')
	{
		p++;
	}
	return p - str;
}
char *My_strcpy(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	/*while (*dst=*src)
	{
		dst++;
		src++;
	}*/

	while (*dst++ = *src++)
	{
		;
	}
	//改进
	return ret;
}
char *My_strcat(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (*src)
	{
		*dst =*src;
		src++; 
		dst++;
	}
	return ret;
}

char *My_strstr(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);
	char *p_str1 = (char *)str1;
	char *p_str2 = (char *)str2;
	char *pc_str1=NULL;
	if (*str2=='\0')
	{
		return NULL;
	}
	while (*p_str1)
	{
		pc_str1 = p_str1;
		p_str2 = (char *)str2;
		while ((*pc_str1 == *p_str2)&&(*p_str2)&&(*pc_str1))
		{
			pc_str1++;
			p_str2++;
		}
		if (*p_str2 == '\0')
		{
			return p_str1;
		}
		p_str1++;
	}


	return NULL;
}
char *My_strchr(char *str, int p)   //字符可转为ASCLL值，故参数2可为int类型
{
	assert(str);
	assert(p);
	char *ret = str;
	while (*str)
	{
		if (*str == p)
			return str;
		else
			str++;
	}
	return NULL;
}

int My_strcmp(const char *str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			break;		
	}
	if ( (*(unsigned char *)str1 - *(unsigned char *)str2) > 0)
		return 1;
	else if ((*(unsigned char *)str1 - *(unsigned char *)str2) < 0)
		return -1;
	return 0;
}


int main()
{
	char str1[] = { "abcdef" };
	char str2[30] = { "0" };
	char str3[30] = { "123456" };
	printf("str1=%s\nstr2=%s\nstr3=%s\n",str1,str2,str3);

	printf("************************************************\n");
	//My_strlen(str1);
	printf("My_strlen：\nMy_strlen1(str1)：len(str)=%d\n", My_strlen1(str1));
	printf("My_strlen2(str1)：len(str)=%d\n", My_strlen2(str1));
	printf("My_strlen3(str1)：len(str)=%d\n", My_strlen3(str1));
	printf("strlen(str1)：len(str)=%d\n", strlen(str1));
	printf("************************************************\n");

	//My_strcpy(str2, str1);
	printf("My_strcpy：\nMy_strcpy(str2,str1)：str2=%s\n", My_strcpy(str2, str1));
	printf("strcpy(str2,str1)：str2=%s\n", strcpy(str2, str1));
	printf("************************************************\n");

	//My_strcat(str3, str1);
	printf("My_strcat：\nMy_strcat(str3,str1)：str3=%s\n", My_strcat(str3, str1));
	printf("strcat(str3,str1)：str3=%s   ", strcat(str3, str1));
	printf("（在My_strcat的结果的基础上再进行一次strcat!）\n");
	printf("************************************************\n");

	//My_strstr(str1,"bcd");
	printf("My_strstr：\nMy_strstr(str1,'bcd')：%s\n", My_strstr(str1, "bcd"));
	printf("strstr(str1,'bcd')：%s\n", strstr(str1, "bcd"));
	printf("************************************************\n");

	//My_strchr(str1,'d');
	printf("My_strchr：\nMy_strchr(str1, 'd')：%s\n", My_strchr(str1, 'd'));
	printf("My_strchr(str1, 'd')：%s\n", My_strchr(str1, 'h'));
	printf("strchr(str1, 'h')：%s\n", strchr(str1, 'd'));
	printf("strchr(str1, 'h')：%s\n", strchr(str1, 'h'));
	printf("************************************************\n");

	//My_strcmp(str1,str3);
	printf("My_strcmp：\nMy_strcmp(str1,str3)：%d\n", My_strcmp(str3, str1));
	printf("My_strcmp(str1,str3)：%d\n", My_strcmp(str1, str3));
	printf("My_strcmp(str1,str3)：%d\n", My_strcmp(str1, str2)); //str2已被修改，此时str2=str1
	printf("strcmp(str1,str3)：%d\n", strcmp(str3, str1));
	printf("strcmp(str1,str3)：%d\n", strcmp(str1, str3));
	printf("strcmp(str1,str3)：%d\n", strcmp(str1, str2));   //str2已被修改，此时str2=str1
	printf("************************************************\n");
	printf("%s", memcpy(str2, str3, strlen(str3 + 1)));
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void *My_memcpy(void *dst,const void *src, int len)
{
	assert("dst");
	assert("src");
	char  *ret = dst;
	while (len--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;

	}

	return ret;
}
void *My_memmove(void *dst, const void *src, int len)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	if (src < dst && (char *)dst < (char *)src + len)
	{
		dst = (char *)dst + len - 1;
		src = (char *)src + len - 1;
		while (len--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}

	}
	else
	{
		while (len--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}

	return ret;

}

int main()
{
	char str1[] = {"i am a student!"};
	char str2[] = { "666" };
	printf("str1=%s\nstr2=%s\n", str1,str2);
	
	//printf("My_memcpy:str1=%s\n", My_memcpy(str1, str2, strlen(str2)+1));
	//printf("memcpy:str1=%s\n",memcpy(str1,str2,strlen(str2)+1));
	//printf("My_memmove:str1=%s\n", My_memmove(str1, str2, strlen(str2) + 1));

	printf("memmove:str1=%s\n", memmove(str1, str2, strlen(str2) + 1));

	system("pause");
	return 0;
}