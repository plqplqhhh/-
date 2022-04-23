#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"



void SLInto(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLCheckCapacity(SL* ps)//����
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

void SLPrint(SL ps)//��ӡ
{
	int i = 0;
	for (i = 0; i < ps.size; i++)
	{
		printf("%d\n", ps.a[i]);
	}
	printf("\n");
}

void SLPushBack(SL* ps, SLDataType x)//β��
{
	 SLCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)//βɾ
{
	assert(ps->size <= 0);
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)//ͷ��
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

void SLPopFront(SL* ps)//ͷɾ
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)//����
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

void SLInsert(SL* ps, size_t pos, SLDataType x)//�м����
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

void SLErase(SL* ps, size_t pos)//�м�ɾ��
{
	assert(pos < ps->size);
	int i = 0;
	for (i = pos; i < ps->size; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->size--;
}