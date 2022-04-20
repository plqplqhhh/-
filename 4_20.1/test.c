#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
int arr[] = { 1,2,3,4,5,6,7 };
//void rotate(int* nums, int numsSize, int k)
//{
//    int i = 0;
//    for (i = 0; i < k; i++)
//    {
//        int p = numsSize;
//        int tmp = nums[numsSize -1];
//        int j = 0;
//        while (p - 1 > 0)
//        {
//            nums[p - 1] = nums[p - 2];
//            p--;
//        }
//        nums[0] = tmp;
//    }
//}

void rotate(int* nums, int numsSize, int k)
{
    int* p = (int*)malloc(numsSize * sizeof(int));
    int i = 0;
    for (i = 0; i < k;i++)
    {
        p[i] = nums[numsSize - k + i];
    }
    int a = 0;
    for (i = k; i < numsSize; i++)
    {
        
        p[i] = nums[a];
        a++;
    }
    nums = &p;
}
int main()
{
    rotate(arr, 7, 3);
}