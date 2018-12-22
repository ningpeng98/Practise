#define _CRT_SECURE_NO_WARNINGS 1
//完成猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**************************\n");
	printf("****** 1.开始游戏  *******\n");
	printf("****** 0.退出游戏  *******\n");
	printf("**************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了!\n");
		}
		else if (input < random_num)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("猜中了！\n");
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
		printf("请选择;");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;

		}
	} while (input);
	system("pause");
	return 0;
}
