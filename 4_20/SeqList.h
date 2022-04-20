#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType * a;
	int size;
	int capacity;
}SL;

void SLInto(SL*ps);						//初始化顺序表
void SLCheckCapacity(SL* ps);			//扩容
void SLPrint(SL ps);					//打印

void SLPushBack(SL* ps, SLDataType x);  //尾插
void SLPopBack(SL* ps);				    //尾删
void SLPushFront(SL* ps,SLDataType x);  //头插
void SLPopFront(SL* ps);			    //头删