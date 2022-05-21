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

void HeapInit(HP* php);						//��ʼ��
void HeapDestroy(HP* php);					//����

void HeapPrint(HP* php);					//��ӡ

void Swap(HPDataType* x, HPDataType* y);	//����
void AdjustUp(HPDataType* data ,int child);	//���ϵ���(�����)
void AdjustDown(HPDataType* data, int size, int father);//���µ���


void HeapPush(HP* php, HPDataType x);		//����
void HeaPop(HP* php);						//ɾ��	
HPDataType HeapTop(HP* php);				//ȡ��
bool HeapEmpty(HP* php);					//�п�
int HeapSize(HP* php);						//ȡ��С


void HeapSort(int* data, int size);


// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();
