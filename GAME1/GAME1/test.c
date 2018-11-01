#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Menu()
{
	printf("****** 1.��ʼ ******\n");
	printf("****** 0.�˳� ******\n");
}
void Game()
{
	char ret = 0;
	printf("��ʼ��Ϸ��\n");
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
		printf("���Ӯ\n");
	}
	else if (ret == 'O')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'P')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
	
	system("pause");
	return 0;
}