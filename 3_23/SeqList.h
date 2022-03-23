#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>

#pragma once


//静态的顺序表
//#define N 100
//struct SeqList
//{
//    int a[N];
//    int size;
//};

typedef int SeqDataType;

typedef struct SeqList
{
    int* a;
    int size; 
    int capacity;
}SeqList,SEQ;
//头插尾插,头删尾删

void SeqListInit(SeqList* pq);
void SeqlustDestory(SeqList* pq);

void SeqListPushBack(SeqList* pq, SeqList x);
void SeqListPushFront(SeqList* pq, SeqList x);
void SeqListPopBack(SeqList* pq);
void SeqListPopFront(SeqList* pq);