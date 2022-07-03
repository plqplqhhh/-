#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>


void Print(int* a, int n);								//fulfil
void Swap(int* p, int* q);								//fulfil

void InsertSort(int* a, int n);							//插入排序
void ShellSort(int* a, int n);							//希尔排序
void SelectSort(int* a, int n);							//选择排序
void AdjustDwon(int* a, int size, int parent);			//fulfil
void HeapSort(int* a, int n);							//堆排序
void BubbleSort(int* a, int n);							//冒泡排序

int GetMidIndex(int* a, int begin, int end);			//三数取中（优化）

int PartSort1(int* a, int begin, int end);				//hoare版本	
int PartSort2(int* a, int left, int right);				//挖坑版
int PartSort3(int* a, int left, int right);				//快慢指针版
void QuickSort(int* a, int left, int right);			//快速排序

void QuickSortNonR(int* a, int left, int right);		//非递归版本


void MergeSort(int* a, int n);							// 归并排序递归实现
void MergeSortNonR(int* a, int n);						// 归并排序非递归实现

void CountSort(int* a, int n);							// 计数排序