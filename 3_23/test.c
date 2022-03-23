#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);




	SeqListDestory(&s);
}

int main()
{
	TestSeqList1();
	return 0;
}