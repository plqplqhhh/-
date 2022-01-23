#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("       《三子棋》\n");
	printf("***********************\n");
	printf("**1、PLAY*****0、EXIT**\n");
	printf("***********************\n");
}

void menu2()
{
	printf("     是否继续游戏:>\n");
	printf("***********************\n");
	printf("**1、YES        0、NO**\n");
	printf("***********************\n");
}
void game()
{
	int i = ROW * COL;
	char board[ROW][COL] = { 0 };
	char ret;
	INIT(board);
	Display(board);
	while(i)
	{
		Player_go(board);
		Display(board);
		ret=Judge_winning(board);
		if (ret != 'c')
		{
			break;
		}
		i--;
		if (i == 0)
		{
			printf("平局\n");
			break;
		}
		Computer_go(board);
		Display(board);
		if (ret != 'c')
		{
			break;
		}
		i--;
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
}

void test()
{
	menu();
	srand((unsigned)time(NULL));
	int input;
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			menu2();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入;>\n");
			break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}