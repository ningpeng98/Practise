#define _CRT_SECURE_NO_WARNINGS 1
//2.���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int search = 0;
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("������Ҫ���ҵ�����");
	scanf("%d",&search);
	if ((search < arr[0][0]) || (search > arr[2][2]))
	{
		printf("%d���������У�\n", search);
	}
	else
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (search == arr[i][j])
					printf("%d������ĵ�%d�е�%d�У�",search,i+1,j+1);
			}
			printf("\n");
		}
	}	
	system("pause");
	return 0;
}

//ʱ�临�Ӷ�С��O(N);


//1.��������ʹ����ȫ����λ��ż��ǰ�档
//#include<stdio.h>
//#include<stdlib.h>
//void Rank(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//			printf("%-2d",arr[i]);	
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%-2d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Rank(arr,sz);
//	system("pause");
//	return 0;
//}