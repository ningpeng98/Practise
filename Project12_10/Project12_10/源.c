#define _CRT_SECURE_NO_WARNINGS 1
//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
//第10次落地时，共经过多少米？第10次反弹多高？
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float long_ = 100;
	float high_ = long_ / 2;
	for (int i = 2; i <= 10; i++)
	{
		long_ = long_ + (2 * high_);
		high_ = high_ / 2;

	}
	printf("long(10)=%f\nhigh(10)=%f\n",long_,high_);

	system("pause");
	return 0;
}