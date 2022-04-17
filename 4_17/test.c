#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
    int x = 0;
    int sum = 0;
    for (x = 0; x < numsSize + 1; x++)
    {
        if (x < numsSize)
        {
            sum = x + sum-nums[x];
        }
        else
        {
            sum = x + sum;
        }
    }
    return sum;
}
int main()
{
	int arr[] = {3,0,1};
	int ret = missingNumber(arr, 3);
	printf("%d", ret);
	return 0;
}
