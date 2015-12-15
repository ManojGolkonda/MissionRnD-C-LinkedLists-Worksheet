/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

void insertNodeBetween(struct node *start, struct node *end, struct node *middle)
{
	while (start != NULL)
	{
		if (middle->num >= start->num)
		{
			struct node *temp1 = middle->next;
			struct node *temp2 = start->next;
			start->next = middle;
			start = middle;
			start->next = temp2;
			end->next = temp1;
			break;
		}
		start = start->next;
	}
}

void swap(struct node *a, struct node *b)
{
	int temp = a->num;
	a->num = b->num;
	b->num = temp;
}

struct node * sortLinkedList(struct node *head) {

/*	struct node *s_min = head;	//pointer to sorted minimum
	struct node *s_max = head;	//pointer to sorted maximum
	while (s_max != NULL)
	{
		struct node *temp = s_max->next;
		if (temp != NULL && temp->num < s_min->num)
		{
			struct node *temp1 = temp->next;
			s_max->next = temp1;
			temp->next = s_min;
			s_min = temp;
		}
		else if (temp != NULL && temp->num > s_max->num)
		{
			s_max = s_max->next;
		}
		else
		{
			if (temp == NULL)
				break;
			insertNodeBetween(s_min, s_max, temp);
		}
	}
	head = s_min;
	return head;
	*/
	if (head == NULL)
		return NULL;
	int count, i;
	struct node *temp;
	struct node *start = NULL;
	do
	{
		count = 0;
		temp = head;

		while (temp->next != start)
		{
			if (temp->num > temp->next->num)
			{
				swap(temp, temp->next);
				count = 1;
			}
			temp = temp->next;
		}
		start = temp;
	} while (count);
	return head;
}