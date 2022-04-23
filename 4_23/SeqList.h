#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType * a;
	int size;
	int capacity;
}SL;

void SLInto(SL*ps);						//初始化顺序表
void SLCheckCapacity(SL* ps);			//扩容
void SeqListDestory(SLDataType* ps);	//释放内存

void SLPrint(SL ps);					//打印
void SLPushBack(SL* ps, SLDataType x);  //尾插
void SLPopBack(SL* ps);				    //尾删
void SLPushFront(SL* ps,SLDataType x);  //头插
void SLPopFront(SL* ps);			    //头删


int SLFind(SL* ps, SLDataType x);//查找

void SLInsert(SL* ps, size_t pos, SLDataType x);//中间插入

void SLErase(SL* ps, size_t pos);//中间删除