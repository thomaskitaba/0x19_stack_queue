#include "monty.h"
/**
* sq_add - add the top 2 elements of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_add(stack_t **stack, unsigned int counter)
{
	stack_t *current, *Next;
	current = Next = *stack;
	int num1, num2, result;
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
		fprintf(stderr, "L[%d] minimum of 2 nodes needed", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	num1 = current->n;
	num2 = current->next->n;
	result = num1 + num2;
	printf("add [%d] + [%d] = %d\n", num1, num2, result);
}
