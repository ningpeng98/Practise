#define _CRT_SECURE_NO_WARNINGS 
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2+22+222+2222+22222 
//����������a=2Ϊ����
//ÿһλ��Ϊ��һλ��*10+2��
//������ѭ������Ϊ��
//***************************************
//for (i = 0; i < 5; i++)
//{
//	tmp = tmp * 10 + 2;
//	Sn = Sn + tmp;
//}
//***************************************
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int i = 0;
	int tmp = 0;
	int Sn = 0;
	printf("��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��\n");
	while (1)
	{
		printf("��������a(0<a<9):");
		scanf("%d", &a);
		if (a > 0 && a < 9)
		{
			for (i = 0; i < 5; i++)
			{
				tmp = tmp * 10 + a;
				Sn = Sn + tmp;
			}
			printf("%d\n", Sn);
		}
		else
		{
			printf("��������a(0<a<9)\n");
		}		
	}
	system("pause");
	return 0;
}