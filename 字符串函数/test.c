/*
  1.strlen   ���ַ�������
  2.strcpy   �����ַ���(����\0)
  3.strcat   ׷���ַ���(����\0)
  4.strcmp   �ַ�����С�Ƚ�
  5.strncmp  �ַ�����С�Ƚϣ�ָ����С�Ƚϣ�
  6.strstr   �����ַ���
  7.strtok   �ָ��ַ��������Σ�
  8.strerror ���ش����룬����Ӧ�Ĵ�����Ϣ
  9.memcmp   �ڴ濽��
  10.memmove �ڴ濽���ص�����
  11.memcmp  �ڴ��ֽڱȴ�С   
  12.memset  �ڴ�����
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
//int my_strlen(const char*str)//�������ķ���
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
//	//�и�buf�е��ַ���
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