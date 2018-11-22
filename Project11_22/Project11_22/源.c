#define _CRT_SECURE_NO_WARNINGS 1
//1.在屏幕上输出以下图案： 
                    //line:13   line/2:6
//      *             line 1; ' ':6 *1        line/2-1,line/2-i
//     ***            line 2; ' ':5 *3
//    *****           line 3; ' ':4 *5
//   *******          line 4; ' ':3 *7
//  *********          
// ***********
//*************   7 0  13
// ***********    8 1  11
//  *********     9 2  9
//   *******      10  3  7
//    *****
//     ***
//      *
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("\n输入行数：");
		scanf("%d", &line);
		if (line % 2 == 0)
			printf("输入一个奇数：");
		else
			break;
	}
//*******************************上半部分*******************************
	for (i = 0; i <=line/2; i++)
	{
		for (j = 1; j <= line/2+1-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
//*******************************下半部分*******************************
	for (i = 0; i <= line-1 ; i++)
	{
		for (j = 1; j <= i; j++)    
		{
			printf(" "); 
			   
		}
		for (j = 1; j <=line-i*2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");

	return 0;
}
//***************************************************************************************
//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，
//如；153＝1＋5＋3 ? ，则153是一个“水仙花数”
//
//#include<stdio.h>
//#include<stdlib.h>
//int cube(int num)
//{
//	return num*num*num;
//}
//int main()
//{
//	int num = 0;
//	for (num = 100; num <= 999; num++)
//	{
//		if (num == cube(num % 10) + cube(num % 100 / 10) + cube(num / 100))
//			printf("%d ", num);
//		else if (num == 999)
//			printf("\n");
//	}
//	system("pause");
//
//	return 0;
//}

//***************************************************************************************
//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//int My_strlen(char *str)
//{
//	assert(str);
//	char *p = str;
//	while (*p)
//	{
//		p++;
//	}
//	return p - str;
//}
//void Swap(char *left, char *right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//void Change(char *str)
//{
//	assert(str!=NULL);
//	char *tmp = str;
//	char *left = str;
//	char *right = str+My_strlen(str)-1;
//	Swap(left,right);
//	printf("%s\n",str);
//	while (*tmp)
//	{
//		char *start = tmp;
//		while((*tmp !=' ') && (*tmp != '\0'))
//		{
//			tmp++;
//		}
//		Swap(start, tmp - 1);
//		if (*tmp == ' ')
//		{
//			tmp++;
//		}
//		
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "student a am i";
//	printf("%s\n", arr);
//	Change(arr);
//	printf("%s\n", arr);
//
//
//	system("pause");
//	return 0;
//}