#include"Sort.h"

void SortTest1()
{
	int arr[] = { 4,3,1,2,5,6,7,9,8 };
	SelectSort(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest2()
{
	int arr[] = { 4,3,1,2,5,6,7,9,8 };
	BubbleSort(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest3()
{
	int arr[] = { 4,3,1,2,5,6,7,9,8 };
	HeapSort(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}
void SortTest4()
{
	int arr[] = { 4,3,1,2,5,6,7,9,8 };
	InsertSort(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}
void SortTest5()
{
	int arr[] = { 4,3,1,2,5,6,7,9,8 };
	ShellSort(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}
void SortTest6()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	QuickSort(&arr, 0, sizeof(arr) / sizeof(0) - 1, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest7()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	QuickSortNonR(&arr, 0, sizeof(arr) / sizeof(0) - 1, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest8()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	MergeSort(&arr,sizeof(arr)/sizeof(arr[0]));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest9()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	MergeSortNonR(&arr, sizeof(arr) / sizeof(arr[0]));
	Print(arr, sizeof(arr) / sizeof(0));
}

void SortTest10()
{
	int arr[] = { 6,1,2,7,9,3,4,5,10,8 };
	void CountSort(int* a, int n);							// ¼ÆÊýÅÅÐò
	(&arr, sizeof(arr) / sizeof(arr[0]));
	Print(arr, sizeof(arr) / sizeof(0));
}

int main()
{
	SortTest10();
	return 0;
}