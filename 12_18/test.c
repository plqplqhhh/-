#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void print1(struct S tmp)
//{
//	printf("%d%c%f\n", tmp.a, tmp.c, tmp.d);
//}
//void print2(const struct S* ps)
//{
//	printf("%d%c%if\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	print1(s);
//	print2(&s);
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//	printf("%d\n", s.a);*/
//	return 0;
//}
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//enum Sex
//{
//	//枚举的可能值-常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE,
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c= BLUE;
//	return 0;
//}
//union un
//{
//	//联合体-共用体
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	return 0;
//}
int main()
{
	int a = 1;
	if (1 == *(char*)&a)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//低地址———>高地址   大端
	//高地址———>低地址   小端
	return 0;
}