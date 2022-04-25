#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SLNode;

void SListPrint(SLNode* plist);//打印

SLNode* BuySListNode(SLDataType x);//申请一个动态节点

void SListPushBack(SLNode** pplist, SLDataType x);	//尾插
void SListPushFront(SLNode** pplist, SLDataType x);	//头插
void SListPopBack(SLNode** pplist);					//尾删
void SListPopFront(SLNode** pplist);				//头删

SLNode* SListFind(SLNode* pplist, SLDataType x);	//查找