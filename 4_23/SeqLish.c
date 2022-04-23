#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"



void SLInto(SL* ps)//初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//扩容
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

void SLPrint(SL ps)//打印
{
	int i = 0;
	for (i = 0; i < ps.size; i++)
	{
		printf("%d\n", ps.a[i]);
	}
	printf("\n");
}

void SLPushBack(SL* ps, SLDataType x)//尾插
{
	 SLCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)//尾删
{
	assert(ps->size <= 0);
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)//头插
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

void SLPopFront(SL* ps)//头删
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)//查找
{
	int i = 0;
	
	for (i = 0; i < ps->size; ps++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SLInsert(SL* ps, size_t pos, SLDataType x)//中间插入
{
	SLCheckCapacity(ps);
	int i = pos;
	for (i = ps->size; i >= pos; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[pos-1] = x;
	ps->size++;
}

void SLErase(SL* ps, size_t pos)//中间删除
{
	assert(pos < ps->size);
	int i = 0;
	for (i = pos; i < ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
}