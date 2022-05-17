#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int* a;
    int k;
    int head;
    int tail;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    obj->a = malloc(sizeof(int) * (k + 1));
    obj->head = obj->tail = 0;
    obj->k = k;
    return obj;
}
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->head == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    int next = obj->tail + 1;
    if (next == obj->k + 1)
    {
        next = 0;
    }
    return next== obj->head;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
        return false;
    obj->a[obj->tail] = value;
    obj->tail++;
    if (obj->tail == obj->k + 1)
        obj->tail = 0;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return false;
    obj->head++;
    if (obj->head == obj->k + 1)
        obj->head = 0;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;
    return obj->a[obj->head];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return -1;
    int prev = obj->tail - 1;
    if (obj->tail == 0)
        prev = obj->k;
    return obj->a[prev];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
    free(obj);
}

void test()
{
    MyCircularQueue* obj = myCircularQueueCreate(3); // 设置长度为 3
    myCircularQueueEnQueue(obj, 1);
    myCircularQueueEnQueue(obj, 2);
    myCircularQueueEnQueue(obj, 3);
    myCircularQueueEnQueue(obj, 4);
    printf("%d", myCircularQueueRear(obj));
    if(!myCircularQueueIsFull(obj));
    printf("haha");
    myCircularQueueDeQueue(obj);
    myCircularQueueEnQueue(obj, 4);
    printf("%d",myCircularQueueRear(obj));
 
}

void test1()
{
    MyCircularQueue* obj = myCircularQueueCreate(6);
    myCircularQueueEnQueue(obj, 6);
    //printf("%d ", myCircularQueueRear(obj));
    //printf("%d ", myCircularQueueRear(obj));
    myCircularQueueDeQueue(obj);
    myCircularQueueEnQueue(obj, 5);
    //printf("%d ", myCircularQueueRear(obj));
    myCircularQueueDeQueue(obj);
    //printf("%d ", myCircularQueueFront(obj));
    myCircularQueueDeQueue(obj);
    myCircularQueueDeQueue(obj);
    myCircularQueueDeQueue(obj);
}

int main()
{
	test1();
	return 0;
}