#include"Sort.h"


void Print(int* a, int n)
{
	int i = 0;
	for (i; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* p, int* q)
{
	int tmp = *q;
	*q = *p;
	*p = tmp;
}
void SelectSort(int* a, int n)
{
	int small=0;
	int bigan = 0;
	while (bigan < n-1)
	{
		for (int i = bigan; i < n ; i++)
		{

			if (a[small] >= a[i])
			{
				small = i;
			}
		}
		Swap(&a[small], &a[bigan]);
		small = bigan+1;
		bigan++;
	}
}

void BubbleSort(int* a, int n)
{
	int i = n;
	for (i; i > 0; i--)
	{
		int j = 0;
		for (j = 0; j+1 < n; j++)
		{
			if (a[j] > a[j + 1])
				Swap(&a[j], &a[j + 1]);
		}
	}
}

void AdjustDwon(int* a, int size, int parent)
{
	int child = parent * 2+1;
	while (child < size)
	{
		if (child + 1 < size && a[child+1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2+1;
		}
		else
			break;
	}
}


void HeapSort(int* a, int n)
{
	int parent = (n -1 -1) / 2;
	while (parent >= 0)
	{
		AdjustDwon(a, n, parent);
		parent--;
	}
	int end = n - 1;
	while (end >= 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		end--;
	}

}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n-gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}
