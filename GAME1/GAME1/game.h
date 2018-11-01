#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3


void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row,int col);
void Computer_move(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL],int row,int col);


#endif