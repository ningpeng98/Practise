#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{ 
	//sizeof(数组名)：此处数组名代表整个数组；
	//&+数组名：此处数组名代表整个数组；
	//其余情况下数组名单独出现均代表首元素地址；
	int a[] = {1,2,3,4};
	printf("int a[] = {1,2,3,4}\n");
	printf("sizeof(a) = %d\n", sizeof(a));//16:数组大小
	printf("sizeof(a+0) = %d\n", sizeof(a+0));//4：首元素‘1’的指针的大小
	printf("sizeof(*a) = %d\n", sizeof(*a));//4：首元素‘1’的大小
	printf("sizeof(a+1) = %d\n", sizeof(a+1));//4：第二个元素‘2’的指针的大小
	printf("sizeof(a[1]) = %d\n", sizeof(a[1]));//第二个元素‘2’的大小
	printf("sizeof(&a) = %d\n", sizeof(&a));//4：整个数组的指针的大小，由于是地址，所以也为4
	printf("sizeof(&a+1) = %d\n", sizeof(&a+1));//4：指向整个数组后的下一个元素的指针的大小
	printf("sizeof(&a[0]) = %d\n", sizeof(&a[0]));//4：第一个元素‘1’的地址的大小
	printf("sizeof(&a[0]+1) = %d\n", sizeof(&a[0]+1));//4：第二个元素‘2’的地址的大小
	printf("sizeof(*&a) = %d\n", sizeof(*&a));//16：&a代表整个数组的地址，解引用代表整个数组

	printf("***************************\n");
	char arr[] = {'a','b','c','d','e','f'};//
	printf("char arr[] = {'a','b','c','d','e','f'}\n");
	printf("sizeof(arr) = %d\n", sizeof(arr));//6：整个数组大小
	printf("sizeof(arr + 0) = %d\n", sizeof(arr + 0));//4：首元素‘a’的指针的大小
	printf("sizeof(*arr) = %d\n", sizeof(*arr));//1：首元素‘a’的大小
	printf("sizeof(arr[1]) = %d\n", sizeof(arr[1]));//1:首元素‘a’的大小
	printf("sizeof(arr[0]+1) = %d\n", sizeof(arr[0] + 1));//4：第二个元素‘b’的指针的大小
	printf("sizeof(&arr) = %d\n", sizeof(&arr));//4：整个数组的指针的大小
	printf("sizeof(&arr + 1) = %d\n", sizeof(&arr + 1));//4：跳过整个数组的下一个指针的大小
	printf("sizeof(&arr[0]+1) = %d\n", sizeof(&arr[0]+1));//4：第二个元素‘b’的指针的大小


	//printf("sizeof(arr) = %d\n", strlen(arr));
	//printf("sizeof(arr + 0) = %d\n", strlen(arr + 0));
	////printf("sizeof(*arr) = %d\n", strlen(*arr));
	////printf("sizeof(arr[1]) = %d\n", strlen(arr[1]));
	//printf("sizeof(&arr) = %d\n", strlen(&arr));
	//printf("sizeof(&arr + 1) = %d\n", strlen(&arr + 1));
	//printf("sizeof(arr[0]+1) = %d\n", strlen(arr[0] + 1));

	printf("***************************\n");
	char *p = "abcdef";
	printf("char *p = 'abcdef'\n");
	printf("sizeof(p) = %d\n", sizeof(p));//4：首元素‘a’指针大小
	printf("sizeof(p+1) = %d\n", sizeof(p+1));//4：第二个元素‘b’指针大小
	printf("sizeof(*p) = %d\n", sizeof(*p));//1：首元素‘a’的大小
	printf("sizeof(p[0]) = %d\n", sizeof(p[0]));//1：首元素‘a’的大小
	printf("sizeof(&p) = %d\n", sizeof(&p));//4：指向首元素指针的指针，仍是指针
	printf("sizeof(&p + 1) = %d\n", sizeof(&p + 1));//4：跳过p的下一个地址空间的指针
	printf("sizeof(p[0] + 1) = %d\n", sizeof(p[0] + 1));//4：第二个元素‘b’的指针
	printf("***************************\n");

	int b[3][4] = { 0 };
	printf("int b[3][4]=\n0 0 0 0\n0 0 0 0\n0 0 0 0\n");
	printf("sizeof(b) = %d\n", sizeof(b));//48：整个数组的大小;12个int型元素
	printf("sizeof(b[0][0]) = %d\n", sizeof(b[0][0]));//4：第一行第一列元素的大小
	printf("sizeof(b[0]) = %d\n", sizeof(b[0]));//16：第一行元素的大小，共4个int型元素
	printf("sizeof(b[0]+1) = %d\n", sizeof(b[0]+1));//4：第二行第二列元素指针大小
	printf("sizeof(b+1) = %d\n", sizeof(b+1));//4：第二行的指针
	printf("sizeof(&b[0] + 1) = %d\n", sizeof(&b[0] + 1));//4：第二行的指针
	printf("sizeof(*b) = %d\n", sizeof(*b));//16：第一行元素的大小；为4个int型元素
	printf("sizeof(*(b+1)) = %d\n", sizeof(*(b+1)));//16：第二行指针解引用：第二行元素大小；为4个int型元素


	system("pause");
	return 0;
}