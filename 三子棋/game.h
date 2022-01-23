#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include<stdio.h>
#include<windows.h>
#include<time.h>

void INIT(char board);
void Display(char board);
void Player_go(char board);
void Computer_go(char board);
char Judge_winning(char board);