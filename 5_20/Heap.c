#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	//php=(HP*)malloc(sizeof(HP));
	php->data = NULL;
	php->size = 0;
	php->capacity = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);
	php->size = php->capacity = 0;
	free(php->data);
}

void HeapPrint(HP* php)
{
	assert(php);
	int i = 0;
	for (i = 0; i < php->size; i ++ )
	{
		printf("%d  ",php->data[i]);
	}
	printf("\n");
}
void Swap(HPDataType* x, HPDataType* y)
{
	HPDataType tmp = *x;
	*x = *y;
	*y = tmp;
}
void AdjustUp(HPDataType* data, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (data[parent] < data[child])
		{
			Swap(&data[parent], &data[child]);
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
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->data, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}

		php->data = tmp;
		php->capacity = newcapacity;
	}

	php->data[php->size] = x;
	php->size++;

	AdjustUp(php->data, php->size - 1);
}

void AdjustDown(HPDataType* data,int size, int father)
{
	int child = father * 2 + 1;
 	while (child<=size)
	{
		if (child+1!=size && data[child] < data[child + 1])
		{
			child++;
		}
		if(data[child]> data[father])
		{
			Swap(&data[child], &data[father]);
			father = child;
			child = father * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeaPop(HP* php)
{
	assert(php);
	php->data[0] = php->data[php->size - 1];
	php->size--;
	AdjustDown(php->data, php->size, 0);
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
	return php->data[0];
}

void HeapSort(int* data, int size)
{
	int i = 0;
	for (i = 0; i < size; i ++ )
	{
		AdjustUp(data, i);
	}
}