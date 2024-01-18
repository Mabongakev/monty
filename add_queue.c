#include "monty.h"
/**
 * f_queue - prints the top
 * @head: first node
 * @c: line arg
 * Return: void
*/
void f_queue(stack_t **head, unsigned int c)
{
	(void)head;
	(void)c;
	argmnt.lifi = 1;
}

/**
 * add_queue - add node at the endstack
 * @n: new_value
 * @head: pointer to the head pointer
 * Return: void
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (temp == 0)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
