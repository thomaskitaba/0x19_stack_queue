#include "monty.h"
/**
* sq_pstr - prints the string starting at the top of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_pstr(stack_t **stack, unsigned int counter)
{
	stack_t *current;

	current = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't pchar, stack empty\n", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
	}
	while (current  && current->n != 0)
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');


}