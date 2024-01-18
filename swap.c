#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: 1st node in the stack
 * @c: arg counter
 * Return: void
*/
void f_swap(stack_t **head, unsigned int c)
{
	stack_t *k;
	int len = 0, temp;

	k = *head;
	while (k)
	{
		k = k->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	temp = k->n;
	k->n = k->next->n;
	k->next->n = temp;
}
