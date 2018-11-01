#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Menu()
{
	printf("****** 1.开始 ******\n");
	printf("****** 0.退出 ******\n");
}
void Game()
{
	char ret = 0;
	printf("开始游戏！\n");
	char board[ROW][COL];
	Init_board(board, ROW, COL);
	Print_board(board,ROW,COL);
	while (1)
	{
		Player_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		Computer_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
	}
	else if (ret == 'O')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'P')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}