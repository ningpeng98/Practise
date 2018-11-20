#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{ 
	//sizeof(������)���˴������������������飻
	//&+���������˴������������������飻
	//����������������������־�������Ԫ�ص�ַ��
	int a[] = {1,2,3,4};
	printf("int a[] = {1,2,3,4}\n");
	printf("sizeof(a) = %d\n", sizeof(a));//16:�����С
	printf("sizeof(a+0) = %d\n", sizeof(a+0));//4����Ԫ�ء�1����ָ��Ĵ�С
	printf("sizeof(*a) = %d\n", sizeof(*a));//4����Ԫ�ء�1���Ĵ�С
	printf("sizeof(a+1) = %d\n", sizeof(a+1));//4���ڶ���Ԫ�ء�2����ָ��Ĵ�С
	printf("sizeof(a[1]) = %d\n", sizeof(a[1]));//�ڶ���Ԫ�ء�2���Ĵ�С
	printf("sizeof(&a) = %d\n", sizeof(&a));//4�����������ָ��Ĵ�С�������ǵ�ַ������ҲΪ4
	printf("sizeof(&a+1) = %d\n", sizeof(&a+1));//4��ָ��������������һ��Ԫ�ص�ָ��Ĵ�С
	printf("sizeof(&a[0]) = %d\n", sizeof(&a[0]));//4����һ��Ԫ�ء�1���ĵ�ַ�Ĵ�С
	printf("sizeof(&a[0]+1) = %d\n", sizeof(&a[0]+1));//4���ڶ���Ԫ�ء�2���ĵ�ַ�Ĵ�С
	printf("sizeof(*&a) = %d\n", sizeof(*&a));//16��&a������������ĵ�ַ�������ô�����������

	printf("***************************\n");
	char arr[] = {'a','b','c','d','e','f'};//
	printf("char arr[] = {'a','b','c','d','e','f'}\n");
	printf("sizeof(arr) = %d\n", sizeof(arr));//6�����������С
	printf("sizeof(arr + 0) = %d\n", sizeof(arr + 0));//4����Ԫ�ء�a����ָ��Ĵ�С
	printf("sizeof(*arr) = %d\n", sizeof(*arr));//1����Ԫ�ء�a���Ĵ�С
	printf("sizeof(arr[1]) = %d\n", sizeof(arr[1]));//1:��Ԫ�ء�a���Ĵ�С
	printf("sizeof(arr[0]+1) = %d\n", sizeof(arr[0] + 1));//4���ڶ���Ԫ�ء�b����ָ��Ĵ�С
	printf("sizeof(&arr) = %d\n", sizeof(&arr));//4�����������ָ��Ĵ�С
	printf("sizeof(&arr + 1) = %d\n", sizeof(&arr + 1));//4�����������������һ��ָ��Ĵ�С
	printf("sizeof(&arr[0]+1) = %d\n", sizeof(&arr[0]+1));//4���ڶ���Ԫ�ء�b����ָ��Ĵ�С


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
	printf("sizeof(p) = %d\n", sizeof(p));//4����Ԫ�ء�a��ָ���С
	printf("sizeof(p+1) = %d\n", sizeof(p+1));//4���ڶ���Ԫ�ء�b��ָ���С
	printf("sizeof(*p) = %d\n", sizeof(*p));//1����Ԫ�ء�a���Ĵ�С
	printf("sizeof(p[0]) = %d\n", sizeof(p[0]));//1����Ԫ�ء�a���Ĵ�С
	printf("sizeof(&p) = %d\n", sizeof(&p));//4��ָ����Ԫ��ָ���ָ�룬����ָ��
	printf("sizeof(&p + 1) = %d\n", sizeof(&p + 1));//4������p����һ����ַ�ռ��ָ��
	printf("sizeof(p[0] + 1) = %d\n", sizeof(p[0] + 1));//4���ڶ���Ԫ�ء�b����ָ��
	printf("***************************\n");

	int b[3][4] = { 0 };
	printf("int b[3][4]=\n0 0 0 0\n0 0 0 0\n0 0 0 0\n");
	printf("sizeof(b) = %d\n", sizeof(b));//48����������Ĵ�С;12��int��Ԫ��
	printf("sizeof(b[0][0]) = %d\n", sizeof(b[0][0]));//4����һ�е�һ��Ԫ�صĴ�С
	printf("sizeof(b[0]) = %d\n", sizeof(b[0]));//16����һ��Ԫ�صĴ�С����4��int��Ԫ��
	printf("sizeof(b[0]+1) = %d\n", sizeof(b[0]+1));//4���ڶ��еڶ���Ԫ��ָ���С
	printf("sizeof(b+1) = %d\n", sizeof(b+1));//4���ڶ��е�ָ��
	printf("sizeof(&b[0] + 1) = %d\n", sizeof(&b[0] + 1));//4���ڶ��е�ָ��
	printf("sizeof(*b) = %d\n", sizeof(*b));//16����һ��Ԫ�صĴ�С��Ϊ4��int��Ԫ��
	printf("sizeof(*(b+1)) = %d\n", sizeof(*(b+1)));//16���ڶ���ָ������ã��ڶ���Ԫ�ش�С��Ϊ4��int��Ԫ��


	system("pause");
	return 0;
}