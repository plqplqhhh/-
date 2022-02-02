#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    int m;
    while ((scanf("%d", &a)) != EOF)
    {
        int i = 0;
        int num = 0;
        double sum = 0.0;
        int count = a;
        for (i = 0; i < a; i++)
        {
            scanf("%d", &m);
            if (m > 0)
            {
                sum = m + sum;
            }
            else
            {
                if (m == 0)
                {
                    num++;
                }
                count--;
            }
        }
        printf("%d %.1f\n", -(num + count - a), sum / count);
    }
    return 0;
}