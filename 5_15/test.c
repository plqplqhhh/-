#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void test()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);

	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);

	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);


	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueSize(&q));
		QueuePop(&q);
	}
	printf("\n");
	QueueDestroy(&q);
}
int main()
{
	test();
	return 0;
}