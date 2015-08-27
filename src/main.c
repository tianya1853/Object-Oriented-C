#include <stdio.h>

#include "list.h"
#include "queue.h"

int main()
{
	ArrayList *arrayList = newArrayList(1);
	
	int i;
	for(i = 0; i < 10; ++i)
	{
		arrayList->list.push(&arrayList->list, i);
	}

	for(i = 0; i < 10; ++i)
	{
		printf("%d\n", arrayList->list.pop(&arrayList->list));
	}
	printf("\n");

	deleteArrayList(arrayList);

	LinkedList *linkedList = newLinkedList();

	for(i = 0; i < 10; ++i)
	{
		linkedList->list.push(&linkedList->list, i);
	}

	for(i = 0; i < 10; ++i)
	{
		printf("%d\n", linkedList->list.pop(&linkedList->list));
	}
	printf("\n");

	deleteLinkedList(linkedList);

	linkedList = newLinkedList();
	LinkedQueue *linkedqueue = newLinkedQueue(linkedList);
	for(i = 0; i < 10; ++i)
	{
		linkedqueue->queue.add(&linkedqueue->queue, i);
	}

	for(i = 0; i < 10; ++i)
	{
		printf("%d\n", linkedqueue->queue.remove(&linkedqueue->queue));
	}

	deleteLinkedQueue(linkedqueue);

	return 0;
}