#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void INIT(char board[ROW][COL]) 
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		int k = 0;
		for (k = 0; k < COL; k++)
		{
			board[i][k]=' ';
		}	
	}
}

void Display(char board[ROW][COL])
{
	system("cls");
	printf("开始游戏\n");
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int k;
		for (k = 0; k < ROW; k++)		

		{
			if (k == ROW - 1)
			{
				printf(" %c \n", board[i][k]);
				break;
			}
			printf(" %c |", board[i][k]);
		}
		if (i < ROW - 1)
		{
			for (k = 0; k < COL; k++)
			{
				if (k == COL - 1)
				{
					printf("---\n");
					break;
				}
				printf("---|");
			}
		}
	}
}

void Player_go(char board[ROW][COL])
{
	printf("玩家落子\n");
	int i, k;
	do
	{
		scanf("%d%d", &i, &k);
		if (i > ROW || k > COL || i<=0 || k<=0)
		{
			printf("非法输入，请重新输入坐标\n");
			continue;
		}
		else
		{
			if (board[i-1][k-1]!=' ')
			{
				printf("坐标已被占用，请重新输入\n");
				continue;
			}
			else
			{
				board[i-1][k-1] = '*';
				break;
			}
		}
	}while(1);
}

void Computer_go(char board[ROW][COL])
{
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] != ' ')
		{
			continue;
		}
		else
		{
			board[x][y] = '#';
			break;
		}
	}
}

char Judge_winning(char board[ROW][COL])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] &&board[1][i]== board[2][i]&&board[2][i]!=' ')
		{
			return board[1][i];
		}
	}
	for (i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[1][1];
	}
	return 'c';
}