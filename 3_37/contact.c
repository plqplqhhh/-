#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Debug()
{
	printf("Look forward to it\n");
}

void People_Init(Con *con)
{
	con->sz = 0;
	memset(con->data, 0, sizeof(con->data));
}

void ADDdata(Con* con)
{
	if (con->sz == MAX_DATA)
	{
		printf("memory full\n");
		return;
	}
	printf("Please enter your name->");
	scanf("%s",con->data[con->sz].name);
	printf("Please enter gender->");
	scanf("%s", con->data[con->sz].sex);
	printf("Please enter your age->");
	scanf("%s", con->data[con->sz].age);
	printf("Please enter your phone number->");
	scanf("%s", con->data[con->sz].phone);
	printf("Please enter your address->");
	scanf("%s", con->data[con->sz].addr);
	con->sz++;
	printf("Add success\n");
}

void Printdata(Con con)
{
	if (con.sz == 0)
	{
		printf("Save as contact\n");
		return;
	}
	int i = 0;
	for(i=0;i<con.sz;i++)
	{
		printf("%-20s%-5s%-5s%-5s%-5s\n",
			con.data[i].name,
			con.data[i].sex,
			con.data[i].age, 
			con.data[i].phone, 
			con.data[i].addr);
	}
}

int search(Con con, char str)
{
	int i = 0;
	for (i = 0; i < con.sz; i ++ )
	{
		if (strcmp(con.data[i].name, str) == 0)
			return i;
	}
	return 0;
}

void SEARCHdata(Concon)
{

}

void DELdata(Con* con)
{
	char test[20];
	printf("Please enter the name to delete->");
	scanf("%s", test);
	int ret=search(*con,test);
	if (ret == 0)
	{
		printf("Query failed\n");
		return;
	}
	int i = con->sz;
	for (i; i > ret; i--)
	{
		con->data[i] = con->data[i - 1];
	}
	con->sz--;
}

