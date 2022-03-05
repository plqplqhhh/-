#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
Left_Rotation(char* str, int a)
{
	int len = strlen(str);
	int Len = len % a;
	int i = 0;
	for (i = 0; i <= Len; i++)
	{
		int tmp = str[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = tmp;
	}
}
int main()
{
	char str[] = "abcdefg";
	int i = 2;
	Left_Rotation(str,i);
	printf("%s",str);
	return 0;
}