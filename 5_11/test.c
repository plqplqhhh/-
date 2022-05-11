#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void test1()
{
	LTNode* s1= ListInit();
	ListPushBack(s1, 1);
	ListPushBack(s1, 2);
	ListPushBack(s1, 3);
	ListPushBack(s1, 4);
	LTNode* s2 = ListFind(s1, 3);
	ListInsert(s2, 999);
	ListErase(s2);
	ListPushBack(s1, 5);
	ListPushBack(s1, 6);
	ListPrint(s1);
}

void test2()
{
	LTNode* s1 = ListInit();
	ListPushFront(s1, 1);
	ListPushFront(s1, 2);
	ListPushFront(s1, 3);
	ListPushFront(s1, 4);
	ListPushFront(s1, 5);
	ListPushFront(s1, 6);
	ListPrint(s1);

}
void test3()
{
	LTNode* s1 = ListInit();
	ListPushBack(s1, 1);
	ListPushBack(s1, 2);
	ListPushBack(s1, 3);
	ListPushBack(s1, 4);
	ListPushBack(s1, 5);
	ListPopFront(s1);
	ListPopFront(s1);
	ListPrint(s1);
}
int main()
{
	test3();
	return 0;
}