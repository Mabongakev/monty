#include "monty.h"
/**
 * f_pop - removes the top element
 * @head: stack head
 * @c: arg count
 * Return: void
*/
void f_pop(stack_t **head, unsigned int c)
{
	stack_t *k;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	*head = k->next;
	free(k);
}
