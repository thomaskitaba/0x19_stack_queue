#include "monty.h"
/**
* sq_rotr - rotates the stack to the bottom.
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/

void sq_rotr(stack_t **stack, unsigned int counter)
{
    stack_t *current, *Next, *temp;
    
    Next = temp = current = *stack;
    if (*stack == NULL || current->next == NULL)
    {
        return;
    }
    while(Next->next)
    {
	current = Next;
        Next = Next->next;
    }
	current->next = NULL;
	

	Next->prev = NULL;
	Next->next = temp;
	temp->prev = Next;
	
	*stack = Next;
	
}
