#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include<stdio.h>
#include<windows.h>

void INIT(char board[ROWS][COLS],int row,int col,char set);
void Display(char board[ROWS][COLS],int row ,int col);
void Set_mine(char board[ROWS][COLS], int row, int col);
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);