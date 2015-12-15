/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	int count[3] = { 0, 0, 0 }, i;
	struct node *begin = head;
	while (begin != NULL)
	{
		count[begin->data]++;
		begin = begin->next;
	}
	begin = head;
	while (count[0]--)
	{
		begin->data = 0;
		begin = begin->next;
	}
	while (count[1]--)
	{
		begin->data = 1;
		begin = begin->next;
	}
	while (count[2]--)
	{
		begin->data = 2;
		begin = begin->next;
	}

	/*	struct node *start = NULL, *middle = NULL, *end = NULL, *begin = NULL, *temp1 = head;
	head = NULL;
	while (temp1 != NULL)
	{
	struct node *temp2 = temp1->next;
	switch (temp1->data)
	{
	case 0:
	if (start != NULL)
	{
	start->next = temp1;
	start = temp1;
	start->next = middle;
	}
	else
	{
	head = temp1;
	start = temp1;
	start->next = middle;
	}
	break;
	case 1:
	if (middle != NULL)
	{
	struct node *temp = start->next;
	start->next = temp1;
	temp1->next = temp;
	}
	else
	{
	middle = temp1;
	start->next = middle;
	middle->next = end;
	}
	break;
	case 2:
	if (end != NULL)
	{
	struct node *temp = end;
	end = temp1;
	end->next = temp;
	}
	else
	{
	end = temp1;
	middle->next = end;
	end->next = NULL;
	}
	break;
	}
	temp1 = temp2;
	}
	if (head == NULL)
	{
	if (middle != NULL)
	head = middle;
	else
	head = end;
	}
	*/
	/*
	struct node *temp = head;
	struct node *start_zero_ptr = NULL, *end_zero_ptr = NULL, *start_one_ptr = NULL, *end_one_ptr = NULL, *start_two_ptr = NULL, *end_two_ptr = NULL;
	while (temp != NULL)
	{
	struct node *temp1 = temp;
	if (temp->data == 0)
	{
	if (start_zero_ptr == NULL)
	{
	start_zero_ptr = temp;
	end_zero_ptr = temp;
	end_zero_ptr->next = NULL;
	}
	else
	{
	end_zero_ptr->next = temp;
	end_zero_ptr = end_zero_ptr->next;
	end_zero_ptr->next = NULL;
	}
	}
	else if (temp->data == 1)
	{
	if (start_one_ptr == NULL)
	{
	start_one_ptr = temp;
	end_one_ptr = temp;
	end_one_ptr->next = NULL;
	}
	else
	{
	end_one_ptr->next = temp;
	end_one_ptr = end_one_ptr->next;
	end_one_ptr->next = NULL;
	}
	}
	else
	{
	if (start_two_ptr == NULL)
	{
	start_two_ptr = temp;
	end_two_ptr = temp;
	end_two_ptr->next = NULL;
	}
	else
	{
	end_two_ptr->next = temp;
	end_two_ptr = end_two_ptr->next;
	end_two_ptr->next = NULL;
	}
	}
	temp = temp1;
	}
	if (start_zero_ptr != NULL)
	{
	head = start_zero_ptr;
	end_zero_ptr->next = start_one_ptr;
	if (start_one_ptr != NULL)
	{
	end_one_ptr->next = start_two_ptr;
	}
	}
	else if (start_one_ptr != NULL)
	{
	head = start_one_ptr;
	end_one_ptr->next = start_two_ptr;
	}
	else
	{
	head = start_two_ptr;
	}*/


}