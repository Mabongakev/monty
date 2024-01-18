#include "monty.h"
argmnt_t argmnt = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: count arguments
* @argv: argument passed on monty
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	argmnt.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = my_getline(&content, &size, file);
		argmnt.content = content;
		c++;
		if (read_line > 0)
		{
			exec(content, &stack, c, file);
		}
		free(content);
	}
	free_list(stack);
	fclose(file);
return (0);
}
