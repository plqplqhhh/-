#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"



void SLInto(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}

void SLPrint(SL ps)
{
	int i = 0;
	for (i = 0; i < ps.size; i++)
	{
		printf("%d\n", ps.a[i]);
	}
	printf("\n");
}

void SLPushBack(SL* ps, SLDataType x)
{
	 SLCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);
	int i = ps->size-1;
	while(i>=0)
	{
		ps->a[i + 1] = ps->a[i];
		i--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SLPopFront(SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->size--;
}