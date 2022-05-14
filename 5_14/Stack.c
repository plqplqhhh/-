#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	ps->data = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->data);
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapcity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->data, newcapcity);
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		ps->data = tmp;
		ps->capacity = newcapcity;
	}
	ps->data = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top != 0);
	ps->top--;
}
