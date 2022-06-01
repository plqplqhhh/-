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

void QueueInit(Queue* pq);					//��ʼ��
void QueueDestroy(Queue* pq);				//����
void QueuePush(Queue* pq, QDataType x);		//���
void QueuePop(Queue* pq);					//����
QDataType QueueFront(Queue* pq);			//��ͷԪ��
QDataType QueueBack(Queue* pq);				//��βԪ��
bool QueueEmpty(Queue* pq);					//�п�
int QueueSize(Queue* pq);					//����	