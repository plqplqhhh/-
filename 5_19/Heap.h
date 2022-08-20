#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType *data;
	int size;
	int capacity;
}HP;

void HeapInit(HP* php);						//初始化
void HeapDestroy(HP* php);					//销毁

void HeapPrint(HP* php);					//打印

void Swap(HPDataType* x, HPDataType* y);	//交换
void AdjustUp(HPDataType* data ,int child);	//向上调整(大根堆)
void AdjustDown(HPDataType* data, int size, int father);//向下调整


void HeapPush(HP* php, HPDataType x);		//插入
void HeaPop(HP* php);						//删除	
HPDataType HeapTop(HP* php);				//取顶
bool HeapEmpty(HP* php);					//判空
int HeapSize(HP* php);						//取大小


void HeapSort(int* data, int size);
void PrintTopK(int* a, int n, int k);
void TestTopk();
