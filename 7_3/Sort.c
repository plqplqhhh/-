#include"Sort.h"
#include"Stack.h"
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
	int small = 0;
	int bigan = 0;
	while (bigan < n - 1)
	{
		for (int i = bigan; i < n; i++)
		{

			if (a[small] >= a[i])
			{
				small = i;
			}
		}
		Swap(&a[small], &a[bigan]);
		small = bigan + 1;
		bigan++;
	}
}

void BubbleSort(int* a, int n)
{
	int i = n;
	for (i; i > 0; i--)
	{
		int j = 0;
		for (j = 0; j + 1 < n; j++)
		{
			if (a[j] > a[j + 1])
				Swap(&a[j], &a[j + 1]);
		}
	}
}

void AdjustDwon(int* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}


void HeapSort(int* a, int n)
{
	int parent = (n - 1 - 1) / 2;
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
	for (int i = 0; i < n - 1; i++)
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
		for (int i = 0; i < n - gap; i++)
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
int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] > a[end])
	{
		if (a[begin] < a[mid])
		{
			return begin;
		}
		else if (a[mid] < a[end])
		{
			return end;
		}
		else
		{
			return mid;
		}
	}
	else
	{
		if (a[begin] > a[mid])
		{
			return begin;
		}
		else if (a[mid] > a[end])
		{
			return end;
		}
		else
		{
			return mid;
		}
	}
}
int PartSort1(int* a, int begin, int end)//Hoare°æ
{
	int left = begin;
	int right = end;
	int keyi = left;
	while (left < right)
	{
		while (a[right] >= a[keyi] && left < right)
		{
			right--;
		}
		while (a[left] <= a[keyi] && left < right)
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	keyi = left;
	return keyi;
}
int PartSort2(int* a, int begin, int end)//ÍÚ¿Ó·¨
{
	int key = a[begin];
	int piti = begin;
	while (begin < end)
	{
		while (begin < end && a[end] >= key)
		{
			end--;
		}
		a[piti] = a[end];
		piti = end;

		while (begin < end && a[begin] <= key)
		{
			begin++;
		}
		a[piti] = a[begin];
		piti = begin;
	}
	a[piti] = key;
	return piti;
}
int PartSort3(int* a, int begin, int end)
{
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[keyi], &a[midi]);
	while (cur <= end)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	keyi = prev;
	prev++;
	return keyi;
}


void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;
	if (end - begin > 10)
	{
		int keyi = PartSort3(a, begin, end);
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else
	{
		InsertSort(a + begin, end - begin + 1);
	}
}

void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, end);
	StackPush(&st, begin);
	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);
		int right = StackTop(&st);
		StackPop(&st);
		int keyi = PartSort3(a, left, right);
		if (left < keyi - 1)
		{
			StackPush(&st, keyi - 1);
			StackPush(&st, left);
		}
		if (keyi + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, keyi+1);
		}
	}
	StackDestroy(&st);
}

void _MergeSort(int* a, int begin, int end,int* tmp)
{
	if (begin >= end)
		return;
	int mid = (begin + end) / 2;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	int begin1 = begin;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = end;
	int i = begin1;
	while (begin1 <= end1&&begin2<=end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while(begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)* n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	_MergeSort(a, 0, n-1,tmp);
	free(tmp);
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + gap * 2 - 1;
			if (end1 >= n || begin2 >= n)
			{
				break;
			}
			else if (end2 >= n)
			{
				end2 = n - 1;
			}
			int mid = end2 - begin1 + 1;
			int j = begin1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
			memcpy(a + i, tmp + i, sizeof(int) * mid);
		}
		gap *= 2;
	}
	free(tmp);
}

void CountSort(int* a, int n)
{

}