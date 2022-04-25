#define _CRT_SECURE_NO_WARNINGS 1
#include"slist.h"

void SListPrint(SLNode* plist)
{
	SLNode* cur = plist;
	while (cur!= NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}

SLNode* BuySListNode(SLDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SLNode** pplist, SLDataType x)
{
	SLNode* newnode = BuySListNode(x);

	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SLNode* cur = *pplist;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SListPushFront(SLNode** pplist, SLDataType x)
{
	SLNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopBack(SLNode** pplist)
{
	assert(*pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLNode* tail = *pplist;
		SLNode* cur = NULL;
		while (tail->next != NULL)
		{
			cur = tail;
			tail = tail->next;
		}
		free(tail);
		cur->next = NULL;
	}
}

void SListPopFront(SLNode** pplist)
{
	assert(*pplist);
	SLNode* next = (* pplist)->next;
	free(*pplist);
	*pplist = next;
}

SLNode* SListFind(SLNode* pplist, SLDataType x)
{
	SLNode* tail = pplist;
	while (tail)
	{
		if (tail->data == x)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}