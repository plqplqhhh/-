#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"



void TestSeqList()
{
	SL s1;
	SLInto(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLPushFront(&s1, 999);
	SLPopFront(&s1);
	SLPrint(s1);
}

int main()
{
	TestSeqList();
	return 0;
}