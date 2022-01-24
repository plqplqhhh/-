#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void INIT(char board[ROWS][COLS],int row,int col,char set)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int k = 0;
		for (k = 0; k < col; k++)
		{
			board[i][k] = set;
		}
	}
}

void Display(char board[ROWS][COLS],int row,int col)
{
//	system("cls");
	printf("-------------------扫雷-------------------------\n");
	int i = 0;
	int j=0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void Set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x=0;
	int y=0;
	while (count)
	{
		x = rand() % row+1 ;
		y = rand() % col+1 ;
		if (board[x][y] == ' ');
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] +
		   mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] +
		   mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

void Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查雷的坐标\n");
		scanf("%d%d", &x, &y);
		if (y >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("踩到雷了\n");
				Display(mine, ROW, COL);
				break;
			}
			else 
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Display(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
		if (win == row * col - EASY_COUNT)
		{
			Display(mine, ROW, COL);
			printf("挑战成功\n");
			break;
		}
	}
}