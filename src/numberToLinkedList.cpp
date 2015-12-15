/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES:

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	if (!N)
	{
		struct node *new_node;
		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->next = NULL;
		new_node->num = N;
		return new_node;
	}
	else
	{
		if (N < 0)
			N *= -1;
		struct node *current_node = NULL;
		while (N > 0)
		{
			struct node *new_node;
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->next = current_node;
			new_node->num = N % 10;
			N /= 10;
			current_node = new_node;
		}
		return current_node;
	}
}