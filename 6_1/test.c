#include"Sort.h"




void SortTest()
{
	int a[] = { 9, 1, 2, 5, 7, 4, 8, 6, 3 };
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

int main()
{
	SortTest();
	return 0;
}