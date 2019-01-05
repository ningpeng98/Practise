#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double X1, X2, Y1, Y2, X;
	while (1)
	{
		printf("X1: Y1:");
		scanf("%lf %lf", &X1, &Y1);
		printf("X2: Y2:");
		scanf("%lf %lf", &X2, &Y2);
		printf("X:");
		scanf("%lf", &X);
		printf("Y=%lf\n*********************\n", ((X - X1)*(Y2 - Y1) / (X2 - X1)) + Y1);
	}
	
	system("pause");
	return 0;
}