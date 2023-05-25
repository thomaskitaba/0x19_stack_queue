#include "monty.h"
/**
* sq_rotr - rotates the stack to the bottom.
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_rotr(stack_t **stack, unsigned int counter)
{
#include "monty.h"
/**
* sq_rotl - rotates the stack to the top
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_rotl(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next, *temp;
    temp = NULL;
    current = Next = *stack;

    if (*stack == NULL)
    {
        fprintf(stderr, "L<%d>: can't rotr, stack empty\n", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
    }
    while(Next->next)
    {
        current = Next;
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        Next =  Next->next;
    }
    *stack = current;
}
}