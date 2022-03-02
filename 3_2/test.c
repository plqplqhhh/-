#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Leap_year(month)
//{
//    int Leap_year[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    return Leap_year[month - 1];
//}
//int common_year(month)
//{
//    int common_year[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    return common_year[month - 1];
//}
//int Day(int year, int month)
//{
//    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//    {
//        return Leap_year(month);
//    }
//    else
//    {
//        return common_year(month);
//    }
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d%d", &year, &month) != EOF)
//    {
//        int day = Day(year, month);
//        printf("%d", day);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 2;
//    int b = 0;
//    while (scanf("%d", &b) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i < b; i++)
//        {
//            a = a <<1;
//        }
//        printf("%d\n", a);
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    float a[7] = { 0 };
    int i = 0;
    scanf("%f %f %f %f %f %f %f", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
    int tmp = 0;
    for (i = 0; i < 6; i++)
    {
        int j = 0;
        for (j = 0; j < 6 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    int sum = 0;
    for (i = 1; i < 6; i++)
    {
        sum += a[i];
    }
    printf("%.2f", sum / 5);
    return 0;
}