/*
  1.strlen   数字符串长度
  2.strcpy   拷贝字符串(包括\0)
  3.strcat   追加字符串(包括\0)
  4.strcmp   字符串大小比较
  5.strncmp  字符串大小比较（指定大小比较）
  6.strstr   查找字符串
  7.strtok   分割字符串（整形）
  8.strerror 返回错误码，所对应的错误信息
  9.memcmp   内存拷贝
  10.memmove 内存拷贝重叠拷贝
  11.memcmp  内存字节比大小   
  12.memset  内存设置
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
//int my_strlen(const char*str)//计数器的方法
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0; 
//}
//char*my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n,arr1");
//	return 0;
//}
//char* my_strcat(char*dest,const char*src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	const char* p1 = "bcdef";
//	const char* p2 = "abcdhhh";
//	//int ret=strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur++)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 &&*s2 && !(*s1 - *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cur;
//		}
//		if (*s1 == '/0')
//		{
//			return	cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main(  )
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char*ret=my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//}
//int main()
//{
//	char arr[] = "hhh@bit.tech";
//	char* p = "@.";	
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}	
//int main()
//{
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	while (num--)
//	{
//		void* ret = dest;
//		assert(dest != NULL);
//		assert(src != NULL);
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1,sizeof(arr1));
//	return 0;
//}
//char* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		(char*)dest = (char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//		return ret;
//	}
//	else
//	{
//		while (count++)
//		{ 
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[100] = { 0 };
//	my_memmove(arr2, arr1, sizeof(arr1));
//	return 0;
//}
int main()
{
	int arr
}