#include "monty.h"
/**
  *f_sub - sustration
  *@head: stack head
  *@c: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int c)
{
	stack_t *temp;
	int k, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", c);
		fclose(argmnt.file);
		free(argmnt.content);
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	k = temp->next->n - temp->n;
	temp->next->n = k;
	*head = temp->next;
	free(temp);
}
