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

void Debug();				//δ����
void People_Init(Con*con);	//��ʼ��
void ADDdata(Con*con);		//����
void Printdata(Con con);	//��ӡ
void DELdata(Con*con);		//ɾ��
void SEARCHdata(Concon);	//����(δ���)