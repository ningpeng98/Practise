#define _CRT_SECURE_NO_WARNINGS 1
//1.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

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

//2.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {1,2,3,4,5,4,3,2,1};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
}