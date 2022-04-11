#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void Fi(int k)
{
    int i=0;
    int ret=0;
    int A=0;
    int B=1;
    while(1)
    {
        ret=A+B;
        if (ret == k)
        {
            printf("%d",0);
            return;
        }
        if(ret>k)
        {
            int C = ret - k;
            int D = k - B;
            if (C > D)
            {
                printf("%d", D);
                return;            
            }
            else
            {
                printf("%d", C);
                return;
            }
            return;
        }
        A=B;
        B=ret;
    }
}
int main()
{
    int i=11;
    while (scanf("%d", &i) != EOF)
    {
        Fi(i);
    }
    return 0;
}