#define _CRT_SECURE_NO_WARNINGS 1
//求100-200间的所有素数
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Prime_number1()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);

}
void Prime_number2()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= i/2; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > i/2)
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);

}

void Prime_number3()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);

}
void Prime_number4()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}

	}
	printf("\ncount=%d\n", count);
}
int main()
{

	Prime_number1();
	Prime_number2();
	Prime_number3();
	Prime_number4();
	//for(i=101;i<=200;i++)均可改为  for(i=101;i<200;i+=2)


	system("pause");
	return 0;
}
