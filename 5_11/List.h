#define _CRT_SECURE_NO_WARNINGS 1
#pragma once;

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef  int LTDataType;
typedef struct ListNode
{
	LTDataType Data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

LTNode* BuyListNode(LTDataType x);					//创建新节点
LTNode* ListInit();									//创建头节点
LTNode* ListFind(LTNode* phead, LTDataType x);		//查找

void ListPrint(LTNode* phead);						//打印

void ListPushBack(LTNode* phead, LTDataType x);		//尾插
void ListPushFront(LTNode* phead, LTDataType x);	//头插
void ListPopBack(LTNode* phead);					//尾删
void ListPopFront(LTNode* phead);					//头删
void ListInsert(LTNode* pos, LTDataType x);			//Pos前插入
void ListErase(LTNode* pos);						//Pos位置删除


