#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void print(int a)
//{
//    int left = 1;
//    int raght = a;
//    int j;
//    while (left <= a && raght >= 0)
//    {
//        for (j = 1; j <= a; j++)
//        {
//            if (left == j)
//            {
//                printf("*");
//                if (left == raght)
//                {
//                    break;
//                }
//            }
//            else if (raght == j)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//        left++;
//        raght--;
//    }
//}
//int main()
//{
//    int i = 0;
//    while (scanf("%d", &i) != EOF)
//    {
//        print(i);
//    }
//}

void print(int arr[],int a)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		printf("%d", arr[i]);
	}
}

void aaaa(int a, int arr[], int d)
{
	if (a < d)
	{
		return;
	}
	for (d; d < a; d++)
	{
		arr[d-1] = arr[d];
	}
	arr[a - 1] = 0;
}
int main()
{
	int a = 0;
	int i = 0;
	int d = 0;
	int arr[51] = { 0 };
	scanf("%d", a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", d);
	aaaa(a,arr,d);
	print(arr,a);
	return 0;
}