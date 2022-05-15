#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	//int size;
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);					//初始化
void QueueDestroy(Queue* pq);				//销毁
void QueuePush(Queue* pq, QDataType x);		//入队
void QueuePop(Queue* pq);					//出队
QDataType QueueFront(Queue* pq);			//对头元素
QDataType QueueBack(Queue* pq);				//对尾元素
bool QueueEmpty(Queue* pq);					//判空
int QueueSize(Queue* pq);					//记数	