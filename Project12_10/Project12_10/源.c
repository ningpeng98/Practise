#define _CRT_SECURE_NO_WARNINGS 1
//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
//��10�����ʱ�������������ף���10�η�����ߣ�
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