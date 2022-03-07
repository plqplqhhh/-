#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//´òÓ¡¿ÕĞÄÈı½Ç

//void Hollow_Triangle(int line)
//{
//	int i = 0;
//	for (i = 1; i <= line; i++)
//	{
//		if (i == line)
//		{
//			int k = 0;
//			for (k = 0; k < line; k++)
//			{
//				printf("* ");
//			}
//			break;
//		}
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			 if (j == 0 || j == i - 1)
//			{
//				printf("* ");
//
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		Hollow_Triangle(i);
//	}
//	return 0;
//}

void My_sort(int count, int arr[11])
{
	int i = 0;
	for (i = 0; i < count-1; i++)
	{
		int j = 0;
		for (j = 0; j < count - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int compare(const void* e1, const void* e2)
{
	int* a = (int*)e1;
	int* b = (int*)e2;
	return *a - *b;
}

void merge(int n, int m, int arr1[500], int arr2[500], int arr3[1000])
{
	int i;
	int j;
	for (i = 0, j = 0; i < n; i++, j++)
	{
		scanf("%d", &arr1[i]);
		arr3[j] = arr1[i];
	}
	for (i = 0; i < m; i++, j++)
	{
		scanf("%d", &arr2[i]);
		arr3[j] = arr2[i];
	}
}

int main()
{
	int n = 0;
	int m = 0;
	int arr1[500] = { 0 };
	int arr2[500] = { 0 };
	int arr3[1000] = { 0 };
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int sum = n + n;

		merge(n, m, arr1, arr2, arr3);
		qsort(arr3, sum,sizeof(int),compare);

		int i = 0;
		for (i = 0; i < n + m; i++)
		{
			printf("%d ", arr3[i]);
		}
	}
	return 0;
}



//#include<stdio.h>
//#include<string.h>
//
//int compare(const void* e1, const void* e2)
//{
//	int* a = (int*)e1;
//	int* b = (int*)e2;
//	return *a - *b;
//}
//
//void merge(int n, int m, int arr1[500], int arr2[500], int arr3[1000])
//{
//	int i;
//	int j;
//	for (i = 0, j = 0; i < n; i++, j++)
//	{
//		scanf("%d", &arr1[i]);
//		arr3[j] = arr1[i];
//	}
//	for (i = 0; i < m; i++, j++)
//	
//		scanf("%d", &arr2[i]);
//		arr3[j] = arr2[i];
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[100] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[1000] = { 0 };
//	scanf("%d%d", &n, &m);
//	int sum = n + n;
//	merge(n, m, arr1, arr2, arr3);
//	qsort(arr3, sum, sizeof(int), compare);
//	int i = 0;
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}