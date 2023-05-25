#include "monty.h"
/**
* sq_push - push to the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_push(stack_t **head, unsigned int counter)
{

    if (head == NULL)
    {
        fprintf(stderr, "L[%d] stack has no pinter", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    if (info.ord_type == 0)
    {
        printf("push = [%d]\n", atoi(info.arg));
        add_start(head, atoi(info.arg));
    }
    else
    {
       add_start(head, atoi(info.arg));
       printf("push = [%d]\n", atoi(info.arg));
    }
}
