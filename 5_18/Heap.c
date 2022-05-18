#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

HP* HeapInit()
{
	HP* php=(HP*)malloc(sizeof(HP));
	php->size = 0;
	php->capacity = 4;
	php->data = (HP*)malloc(sizeof(HP) * php->capacity);
	return php;
}

void HeapDestroy(HP* php)
{
	assert(php);
	php->size = php->capacity = 0;
	free(php->data);
}

void AdjustUp(HPDataType* data, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (data[parent] < data[child])
		{
			HPDataType tmp= data[parent];
			data[child] = data[parent];
			data[parent] = data[child];
			child = parent;
			parent /= 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		php->capacity *= 2;
		php->data = (HPDataType*)realloc(sizeof(HPDataType) , php->capacity);
	}
	php->data[php->size] = x;
	php->size++;
	AdjustUp(php->data, php->size - 1);
}

void HeaPop(HP* php)
{
	assert(php);
	if (HeapEmpty(php))
	{
		printf("pop fail");
		exit(-1);
	}
	php->size--;
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size;
}

int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	return php->data[php->size];
}