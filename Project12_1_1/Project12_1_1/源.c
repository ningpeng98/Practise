#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#include<stdio.h>
#include<windows.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 2299;
	int n = 1999;
	int ret = calc_diff_bit(m, n);
	{
		printf("%d\n", ret);
	}
	system("pause");
	return 0;
}
