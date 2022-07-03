#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>


void Print(int* a, int n);								//fulfil
void Swap(int* p, int* q);								//fulfil

void InsertSort(int* a, int n);							//��������
void ShellSort(int* a, int n);							//ϣ������
void SelectSort(int* a, int n);							//ѡ������
void AdjustDwon(int* a, int size, int parent);			//fulfil
void HeapSort(int* a, int n);							//������
void BubbleSort(int* a, int n);							//ð������

int GetMidIndex(int* a, int begin, int end);			//����ȡ�У��Ż���

int PartSort1(int* a, int begin, int end);				//hoare�汾	
int PartSort2(int* a, int left, int right);				//�ڿӰ�
int PartSort3(int* a, int left, int right);				//����ָ���
void QuickSort(int* a, int left, int right);			//��������

void QuickSortNonR(int* a, int left, int right);		//�ǵݹ�汾


void MergeSort(int* a, int n);							// �鲢����ݹ�ʵ��
void MergeSortNonR(int* a, int n);						// �鲢����ǵݹ�ʵ��

void CountSort(int* a, int n);							// ��������