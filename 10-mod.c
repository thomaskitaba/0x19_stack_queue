#include "monty.h"
/**
* sa_mod - modulus of top two elements of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_mod(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next;
	int num1, num2, result;

    current = Next = *stack;
	num1 = num2 = result = 0;
    if (current->n == 0)
    {
        fprintf(stderr, "L<%d>: division by zero", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
    }
	if (current->next == NULL)
	{
		fprintf(stderr, "L<%d>: can't div, stack too short", counter);
		fclose(info.file);
		free(info.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	num1 = current->n;
	num2 = current->next->n;
    result = num2 % num1;
    current->next->n = result;
    printf("mod = [%d] mod [%d] = %d\n", num2, num1, result);
    printf("Inserted [%d] on second node of value [%d] and poped [%d] from Top\n" , result, num2, num1);
    sq_pop(stack, counter);

}