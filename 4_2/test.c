#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

enum optiom
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
void menu()
{
	printf("**********************************\n");
	printf("*****    1.ADD      2.DEL    *****\n");
	printf("*****    3.SEARCH   4.MODIFY *****\n");
	printf("*****    5.SORT     6.PRINT  *****\n");
	printf("*****         0.EXIT         *****\n");
	printf("**********************************\n");
}

void test()
{
	int input = 0;
	Con con;
	People_Init(&con);
	menu();
	do
	{
		printf("Please select;");
		scanf("%d", &input);
		system("cls");
		menu();
		switch (input)
		{
		case ADD:
			ADDdata(&con);
			break;
		case DEL:
			DELdata(&con);
			break;
		case SEARCH:
			SEARCHdata();
			break;
		case MODIFY:
			Debug();
			break;
		case SORT:
			Debug();
			break;
		case PRINT:
			Printdata(con);
			break;
		case EXIT:
			printf("exit....\n");
			return;
		default:
			printf("Input failed\n");
			break;
		}

	} while (input);
	menu();

}
int main()
{
	test();
	return 0;
}