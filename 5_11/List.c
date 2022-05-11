#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* new = (LTNode*)malloc(sizeof(LTNode));
	if (new == NULL)
	{
		perror("malloc fail");
	}
	new->Data = x;
	new->next = NULL;
	new->prev = NULL;
	return new;
}

LTNode* ListInit()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* NEXT = phead->next;
	while (NEXT != phead)
	{
		printf("%d\n", NEXT->Data);
		NEXT = NEXT->next;
	}
	printf("\n");
}

void ListPushBack(LTNode* phead, LTDataType x)
{
	/*assert(phead);
	LTNode* newnode = BuyListNode(x);
	newnode->prev = phead->prev;
	phead->prev = newnode;
	newnode->next = phead;
	newnode->prev->next = newnode;*/
	ListInsert(phead, x);
}

void ListPushFront(LTNode* phead, LTDataType x)
{
	//assert(phead);
	//LTNode* newnode = BuyListNode(x);
	//LTNode* tmp = phead->next;
	//phead->next = newnode;
	//newnode->next = tmp;
	//newnode->prev = phead;
	//tmp->prev = newnode;
	ListInsert(phead->next, x);
}

void ListPopBack(LTNode* phead)
{
	/*assert(phead);
	assert(phead->next != NULL);
	LTNode* tmp = phead->prev;
	phead->prev = phead->prev->prev;
	phead->prev->next = phead;
	free(tmp);*/
	ListErase(phead->prev);
}

void ListPopFront(LTNode* phead)
{
	/*assert(phead);
	assert(phead->next != NULL);
	LTNode* tmp = phead->next;
	phead->next = phead->next->next;
	phead->next->prev = phead;
	free(tmp);*/
	ListErase(phead->next);
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	LTNode* Next = phead->next;
	while (Next != phead)
	{
		if (Next->Data == x)
		{
			return Next;
		}
		Next = Next->next;
	}
}

void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = BuyListNode(x);
	LTNode* tmp = pos->prev;
	tmp->next = newnode;
	newnode->next = pos;
	newnode->prev = pos->prev;
	pos->prev = newnode;
	tmp->next = newnode;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* tmp = pos;
	pos->next->prev = pos->next->prev->prev;
	pos->prev->next = pos->prev->next->next;
	free(pos);
}