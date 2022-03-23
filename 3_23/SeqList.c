#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void SeqListInit(SeqList* pq)
{
	assert(pq);
	pq->a = NULL;
	pq->size = pq->capacity = 0;
}

void SeqListDestory(SeqList* pq)
{
	assert(pq);
	free(pq->a);
	pq->a = NULL;
	pq -> capacity = pq->size = 0;
}

void SeqListPushBack(SeqList* pq, SeqDataType x)
{
	assert(pq);

	if (pq->size == pq->capacity)
	{
		int newcapacity = pq->capacity * 2;
		SeqDataType* newA = ralloc(pq->a,sizeof(SeqDataType) * newcapacity);
		if (newA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pq->a = newA;
		pq->capacity = newcapacity;
		pq->capacity = newcapacity;
	}
	pq->a[pq->size] = x;
	pq->size++; 
}

void SeqListPushFront(SeqList* pq, SeqDataType x);