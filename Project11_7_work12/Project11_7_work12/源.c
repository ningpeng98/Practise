#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	c = (a&b) + ((a^b) >> 1);
//	printf("%d\n", c);
//	system("pause");
//	return 0;;
//}
//
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,4,3,2,1};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void Change(char *left,int *right)
//{
//	assert(*left != NULL);
//	assert(*right != NULL);
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int My_strlen(char *str)
//{
//	int count = 0;
//	assert(*str !=  NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "student a am i";
//	printf("%s\n",arr1);
//	int len=My_strlen(arr1);
//	Change(arr1,len);
//	printf("%d",len);
//	printf("%s\n", arr1);
//
//	system("pause");
//	return 0;
//}




#include<stdio.h>
#include <assert.h>
#include<windows.h>
int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_str(char *left, char*right)
{
	assert(left != NULL);
	assert(right != NULL);

	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse(char *str)
{
	char *cur = str;
	char*left = str;
	char*right = str + my_strlen(str) - 1;
	assert(str != NULL);
	reverse_str(left, right);
	while (*cur)
	{
		char *start = cur;
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		reverse_str(start, cur - 1);
		if (*cur == ' ')
			cur++;
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}