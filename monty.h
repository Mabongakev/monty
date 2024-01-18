#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct argmnt_s - variables -args, file, content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct argmnt_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  argmnt_t;
extern argmnt_t argmnt;
void f_push(stack_t **head, unsigned int c);
void f_add(stack_t **head, unsigned int c);
void add_node(stack_t **head, int n);
void f_display(stack_t **head, unsigned int c);
void free_list(stack_t *head);
void f_nop(stack_t **head, unsigned int c);
void f_pint(stack_t **head, unsigned int c);
void f_pop(stack_t **head, unsigned int c);
void f_charac(stack_t **head, unsigned int c);
void f_swap(stack_t **head, unsigned int c);
void add_queue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int c);
int exec(char *content, stack_t **stack, unsigned int c, FILE *file);
int main(int argc, char *argv[]);
#endif
