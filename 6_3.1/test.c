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
int main()
{
	SortTest5();
	return 0;
}