#include "monty.h"
/**
* exec - executes the opcode
* @stack: head linked list - stack
* @c: line arg
* @file: poiner to monty file
* @content: line content
* Return: void
*/
int exec(char *content, stack_t **stack, unsigned int c, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"display", f_display}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"print_char", f_charac},
				{"queue", f_queue},
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	argmnt.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, c);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", c, op);
		fclose(file);
		free(content);
		free_list(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
