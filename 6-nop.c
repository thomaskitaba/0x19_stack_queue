#include "monty.h"
/**
* nop_stack - do nothing to the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_nop(stack_t **stack, unsigned int counter)
{
    (void)stack;
    (void)counter;
    printf("Nothing\n");
    return;
}