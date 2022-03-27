#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define MAX_DATA 500
#define MAX_NAME 30
#define MAX_SEX 5
#define MAX_AGE 10
#define MAX_PHONE 12
#define MAX_ADDR 50

typedef struct People
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char age[MAX_AGE];
	char phone[MAX_PHONE];
	char addr[MAX_ADDR];
}People;

typedef struct Con
{
	People data[MAX_DATA];
	int sz;
}Con;

void Debug();				//未开发
void People_Init(Con*con);	//初始化
void ADDdata(Con*con);		//增加
void Printdata(Con con);	//打印
void DELdata(Con*con);		//删除
void SEARCHdata(Concon);	//查找(未完成)