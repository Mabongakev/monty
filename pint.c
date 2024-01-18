#include "monty.h"
/**
 * f_pint - prints the top
 * @head: 1st node
 * @c: arg counter
 * Return: void
*/
void f_pint(stack_t **head, unsigned int c)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
