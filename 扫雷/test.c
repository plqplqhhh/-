#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("	《扫雷》\n");
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
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	INIT(mine,ROWS,COLS,'0');
	INIT(show, ROWS, COLS, '?');
	Set_mine(mine, ROW, COL);
//	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	Find_mine(mine,show,ROW,COL);
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