#include "monty.h"
/**
* nop_div -  divide the top two elements of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_div(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next;
	current = Next = *stack;
	int num1, num2, sum;
	num1 = num2 = sum = 0;
	printf("hello thomas kitaba");
	if (*stack == NULL)
	{
		fprintf(stderr, "Stack is empty");
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (current->next == NULL)
	{
		fprintf(stderr, "minimum of 2 nodes needed to perform addition");
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	num1 = current->n;
	num2 = current->next->n;
	sum = num1 + num2;
	printf("%d", sum);
}