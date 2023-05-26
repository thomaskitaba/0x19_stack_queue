#include "monty.h"
/**
* sq_pchar - prints the char at the top of the stack followed by a new line.
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_pchar(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    int value;

    current = *stack;
    if (*stack == NULL)
    {
        fprintf(stderr, "L<%d>: can't pchar, stack empty\n", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
    }
    value = current->n;
    if (value < 0 && value > 127)
    {
        fprintf(stderr, "L<%d>: can't pchar, value out of range\n", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
    }
    {
        printf("asci for [%d] = \"%c\"\n", value, value);
    }



}