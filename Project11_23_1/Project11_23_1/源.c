#define _CRT_SECURE_NO_WARNINGS 1
//1.��д������ 
//unsigned int reverse_bit(unsigned int value);
//��������ķ��� ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
#include<stdio.h>
#include<stdlib.h>
unsigned int reverse_bit(int num)
{
	int ret = 0;
	int i = 0;
	for (i = 0; i<32; i++)
	{
		ret <<= 1;
		ret |= ((num >> i) & 1);
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("������Ҫ��ת�����֣�");
	scanf("%d",&num);
	unsigned int ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}