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

HP* HeapInit();
void HeapDestroy(HP* php);

void HeapPush(HP* php, HPDataType x);
void HeaPop(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);