#define _CRT_SECURE_NO_WARNINGS 1
//��ɲ�������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("****** 1.��ʼ��Ϸ  *******\n");
	printf("****** 0.�˳���Ϸ  *******\n");
	printf("**************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("���������֣�");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���!\n");
		}
		else if (input < random_num)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("�����ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��;");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("����������������룡\n");
			break;

		}
	} while (input);
	system("pause");
	return 0;
}
