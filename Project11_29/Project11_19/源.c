#define _CRT_SECURE_NO_WARNINGS 1
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}

int count_one(int input)
{
	int count = 0;
	while (input)
	{
		input = input&(input - 1);
		count++;
	}
	return count;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input;
	printf("�������֣�");
	scanf("%d",&input);
	int num = count_one(input);
	printf("%d one bit = %d",input,num);
	system("pause");
	return 0;
}
