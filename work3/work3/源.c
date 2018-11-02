#define _CRT_SECURE_NO_WARNINGS 1
////1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int A[] = {1,2,3,4,5};
//	int B[] = {6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(A)/sizeof(A[0])-1; 
//	printf("初始A为:");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ",A[i]);
//	}
//	printf("\n初始B为:");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n交换中...\n");
//	for (i = 0; i <= sz; i++)
//	{
//		int tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	printf("数组A为：");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n数组B为：");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	int j = 2;
//	double sum1 = 1/i;
//	double sum2 = -(1/j);
//	for (i = 3; i <= 99; i += 2)
//	{
//		sum1 = sum1+1/i;
//	}
//	for (j = 4; j <= 100; j += 2)
//	{
//		sum2 = sum2 - 1 / j;
//	}
//	printf("结果为：%f\n", sum1+sum2);
//	system("pause");
//	return 0;
//}
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		else if (i/10==9)
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n9出现的次数为：%d\n",count);
	system("pause");
	return 0;
}