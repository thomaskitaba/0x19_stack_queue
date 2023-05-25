#include "monty.h"
/**
* sq_queue- change the mode to stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_queue(stack_t **stack, unsigned int counter)
{
    if (info.ord_type != 0 || info.ord_type != 1)
    {
        fprintf(stderr, "L<%d>: can't change to queue\n", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
    }
    info.ord_type = 1;
}