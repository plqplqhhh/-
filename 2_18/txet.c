#include<stdio.h>
//int test(int x)
//{
//	if (x <= 1)
//	{
//		return x;
//	}
//	return x * 2 - 1;
//}
//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	int sum=test(i);
//	printf("%d", sum);
//	return 0;
//
//}

void JO(int arr[], int sz)
{
	int i =0 ;
	int arrs[20]={0};
	int a = 0;
	for (i=0; i < sz; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arrs[a] = arr[i];
			a++;
		}
	}
	for (i=0; i < sz; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arrs[a] = arr[i];
			a++;
		}
	}
	for (i = 0; i < sz; i++)
	{
		arr[i] = arrs[i];
	}
}

int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len=sizeof(arr)/sizeof(arr[0]);
	JO(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}
