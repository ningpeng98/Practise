#define _CRT_SECURE_NO_WARNINGS 1
////1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int A[] = {1,2,3,4,5};
//	int B[] = {6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(A)/sizeof(A[0])-1; 
//	printf("��ʼAΪ:");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ",A[i]);
//	}
//	printf("\n��ʼBΪ:");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n������...\n");
//	for (i = 0; i <= sz; i++)
//	{
//		int tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	printf("����AΪ��");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n����BΪ��");
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
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
//	printf("���Ϊ��%f\n", sum1+sum2);
//	system("pause");
//	return 0;
//}
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
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
	printf("\n9���ֵĴ���Ϊ��%d\n",count);
	system("pause");
	return 0;
}