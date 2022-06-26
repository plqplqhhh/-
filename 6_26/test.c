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
	PartSort1(&arr, sizeof(arr) / sizeof(0));
	Print(arr, sizeof(arr) / sizeof(0));
}
int main()
{
	SortTest6();
	return 0;
}