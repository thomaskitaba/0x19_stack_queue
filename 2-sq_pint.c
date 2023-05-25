#include "monty.h"
/**
* sq_pint - print the top element of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_pint(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    current = *stack;

    if (*stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't pint, stack empty\n", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
    printf("pint = %d\n", current->n);

}
