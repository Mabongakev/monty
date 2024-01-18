#include "monty.h"
/**
* free_list - frees a list
* @head: 1st node of a list
*/
void free_list(stack_t *head)
{
	stack_t *fr;

	fr = head;
	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}
