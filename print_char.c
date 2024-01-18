#include "monty.h"
/**
 * f_charac - prints the char at the top of the stack,
 * followed by a new line
 * @head: 1st node
 * @c: arg count
 * Return: void
*/
void f_charac(stack_t **head, unsigned int c)
{
	stack_t *h;

	h = *head;
	if (h == 0)
	{
		fprintf(stderr, "L%d: can't print char, stack empty\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't print char, value out of range\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
