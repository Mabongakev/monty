#include "monty.h"
/**
 * f_display - prints the stack
 * @head: 1st node
 * @c: line arg
 * Return: 0
*/
void f_display(stack_t **head, unsigned int c)
{
	stack_t *p;
	(void)c;

	p = *head;
	if (p == NULL)
		return;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}

