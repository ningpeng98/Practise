#define _CRT_SECURE_NO_WARNINGS 1
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != ' A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("�����ǣ�%c\n", killer);
		}
	}

	system("pause");
	return 0;
}