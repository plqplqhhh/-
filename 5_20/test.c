#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void Heaptest1()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	HP php;
	HeapInit(&php);
	int i = 0;
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		HeapPush(&php, a[i]);
	}
	HeaPop(&php);
	HeapPrint(&php);
}


void Sorttest()
{
	int b[] = { 1,5,8,9,3,7,4,6,0 };
	int size = sizeof(b) / sizeof(b[0]);
	HeapSort(&b, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d  ", b[i]);
	}
}

int main()
{

	//Heaptest();
	Sorttest();
	return 0;
}