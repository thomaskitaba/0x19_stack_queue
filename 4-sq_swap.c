#include "monty.h"
/**
* sq_swap - swaps the top two elements of a stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_swap(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next;
	int num1, num2, temp;

    current = Next = *stack;
	num1 = num2 = temp = 0;

	if (current->next == NULL)
	{
		fprintf(stderr, "L<%d>: can't swap, stack too short\n", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	num1 = current->n;
	num2 = current->next->n;

	temp = current->n;
    current->n = current->next->n;
    current->next->n = temp;
	printf("swaped [%d] with [%d]\n", num1, num2);
}
