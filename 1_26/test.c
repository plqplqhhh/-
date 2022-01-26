#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//    char str1[100] = "\0";
//    char str2[100] = "\0";
//    int i = 0;
//    gets(str1);
//    int a = strlen(str1);
//    for (i = 0; i < a; i++)
//    {
//        str2[i] = str1[a - i-1];
//    }
//    for (i = 0; i < a; i++)
//    {
//        printf("%c", str2[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a * 5 + 40 * a + 300 * a + 2000 * a + 10000 * a);
//	return 0;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int k = 0;
	for (i = 1; i <= a; i++)
	{
		for (k = 0; k < a-i; k++)
		{
			printf("  ");
		}
		for (k = 0; k < i; k++)
		{
			printf("* ");
		}
		for (k = 1; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 0; i < a-1 ; i++)
	{
		for (k = 0; k < i+1; k++)
		{
			printf("  ");
		}
		for (k = 0; k < a - i - 1; k++)
		{
			printf("* ");
		}
		for (k = 1; k < a - i - 1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}