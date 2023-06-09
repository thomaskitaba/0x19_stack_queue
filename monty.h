#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * stack_s - double linked list
 * @n: value in list
 * @next: pointer to next node
 * @prev: pointer to previous node
 * Desription: structure that defines stack or queue
 */
typedef struct stack_s{
	int n;
	struct stack_s *next;
	struct stack_s *prev;
}stack_t;
extern stack_t *stack;
/**
 * info_s - holdes info necessory for monty opcode interpreter
 * @content: content of a line in monty file
 * @arg: argument part of monty opecode
 * @fp: pointer to a monty file
 * @ll_type: change between stack <-> queue
 */
typedef struct info_s{
	char *content;
	char *arg;
	FILE *file;
	int ord_type;
}info_t;
extern info_t info;


typedef struct opcode{
	char *op;
	void (*func)(stack_t **stack, unsigned int counter);
}op_optn;
/**
 *
 *
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void sq_push(stack_t **stack, unsigned int counter);
void sq_pall(stack_t **stack, unsigned int counter);
void sq_pint(stack_t **stack, unsigned int counter);
void sq_pop(stack_t **stack, unsigned int counter);
void sq_swap(stack_t **stack, unsigned int counter);
void sq_add(stack_t **stack, unsigned int counter);
void sq_nop(stack_t **stack, unsigned int counter);
void sq_line(stack_t **stack, unsigned int counter);
void sq_sub(stack_t **stack, unsigned int counter);
void sq_div(stack_t **stack, unsigned int counter);
void sq_mul(stack_t **stack, unsigned int counter);
void sq_mod(stack_t **stack, unsigned int counter);
void sq_pchar(stack_t **stack, unsigned int counter);
void sq_pstr(stack_t **stack, unsigned int counter);
void sq_rotl(stack_t **stack, unsigned int counter);
void sq_rotr(stack_t **stack, unsigned int counter);
void sq_stack(stack_t **stack, unsigned int counter);
void sq_queue(stack_t **stack, unsigned int counter);


void free_stack(stack_t *stack);
void add_start(stack_t **head, int n);
void add_end(stack_t **head, int n);
void pop_end(stack_t **stack);
void pop_start(stack_t **stack);
#endif
