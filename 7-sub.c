#include "monty.h"
/**
* nop_sub - subtract  the top two elements of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_sub(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next;
	int num1, num2, result;

    current = Next = *stack;
	num1 = num2 = result = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L[%d]Stack is empty", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (current->next == NULL)
	{
		fprintf(stderr, "L<%d>: can't sub, stack too short\n", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	num1 = current->n;
	num2 = current->next->n;
	result = num2 - num1;
	printf("sub [%d] - [%d] = %d\n", num2, num1, result);
}