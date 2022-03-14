#define _CRT_SECURE_NO_WARNINGS 1
/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
            佛祖保佑       永无BUG
*/
#include<stdio.h>
#include<string.h>

void print(int* p, int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", p[i]);
    }
}
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
int Judge_number(const void *x,const void *y)
{
    return (*(int*)x - *(int*)y);
}

int Judge_Word(char*p,char*y)
{
    return strcmp( p , y );
}

void My_Qsort(void* p, int num,int width,int Judge(void*, void*))
{
    int i = 0;
    for (int i = 0; i < num - 1; i++)
    {
        int j = 0;
        for (j = 0; j < num - i-1 ; j++)
        {
            if ((Judge( (char*)p+j*width, (char*)p+(j+1)*width)) >0)
            {
                Swap((char*)p + j * width, (char*)p + (j + 1)*width,width);
            }
        }
    }
}


int main()
{
    int arr[] = { 7,8,6,9,1,2,3,5,4,10 };
    int sz = sizeof(arr)/sizeof(arr[0]);
    My_Qsort( arr,sz,4,Judge_number);
    print(arr, sz);


    char str[] = "bdeqscfag";
    int len = strlen(str);
    My_Qsort(str, len,1 , Judge_Word);
    
    return 0;
}