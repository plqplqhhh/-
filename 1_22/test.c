#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void bubble(int* arr,int ret)
//{
//	int i=0;
//	int tmp;
//	for (i = 0; i < ret; i++)
//	{
//		int k;
//		for (k = 0; k < ret -1 - i; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,ret);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//void init(int* arr,int ret)
//{
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
void print(int* arr,int ret)
{
	int i=0;
	for (i = 0; i < ret; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
//
//void reverse(int* arrs,int ret)
//{
//	int i;
//	int tmp;
//	for (i = 0; i < ret/2; i++)
//	{
//		tmp = arrs[i];
//		arrs[i] = arrs[ret -1 - i];
//		arrs[ret - 1 - i] = tmp;
//	}
//}
//
//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	int arrs[] = { 2,4,6,8,10 };
//	int rets= sizeof(arrs) / sizeof(arrs[0]);
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	init(arr,ret);
//	print(arr,ret);
//	reverse(arrs,rets);
//	print(arrs, rets);
//	return 0;
//}

void Exchange_arrays(int* A,int* B,int ret)
{
	int i;
	int tmp;
	for (i = 0; i < ret; i++)
	{
		tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}
}
int main()
{
	int A[5] = { 2,4,6,8,10 };
	int B[5] = { 1,3,5,7,9 };
	int ret = sizeof(A) / sizeof(A[0]);
	print(A, ret);
	print(B, ret);
	Exchange_arrays(A, B,ret);
	print(A, ret);
	print(B, ret);
	return 0;
}