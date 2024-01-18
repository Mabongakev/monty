#include "monty.h"
/**
 * f_push - inserts node to the stack
 * @head: 1st node
 * @c: count arg
 * Return: void
*/
void f_push(stack_t **head, unsigned int c)
{
	int n, k = 0, g = 0;

	if (argmnt.arg)
	{
		if (argmnt.arg[0] == '-')
			k++;
		while (argmnt.arg[k] != '\0')
			k++;
		{
			if (argmnt.arg[k] > 57 || argmnt.arg[k] < 48)
				g = 1;
		}
		if (g == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(argmnt.file);
			free(argmnt.content);
			free_list(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(argmnt.arg);
	if (argmnt.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
