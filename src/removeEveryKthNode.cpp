/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K < 2)
		return NULL;
	struct node *begin = head;
	int count = 1;
	while (begin != NULL)
	{
		if (!((count + 1) % K))
		{
			if (begin->next != NULL)
			{
				struct node *temp = begin->next;
				begin->next = temp->next;
				free(temp);
				count++;
			}
		}
		count++;
		begin = begin->next;
	}
	return head;
}