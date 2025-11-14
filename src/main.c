#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    Stack *stack = stack_define();

    for (int i = 1; i <= 4; i++)
    {
        int push_success = stack_push(stack, i);
        if (!push_success)
            break;
    }

    printf("Pilha: \n");
    stack_show(stack);
    printf("\n");

    for (int i = 1; i <= 4; i++)
    {
        int *data = (int *)malloc(sizeof(int));
        int pop_success = stack_pop(stack, data);
        if (pop_success)
        {
            printf("Número %d foi removido da pilha\n", *data);
        }
        else
        {
            printf("Erro ao remover um número\n");
            break;
        }
    }

    printf("Pilha: \n");
    stack_show(stack);
    printf("\n");

    stack_clean_memory(stack);

    return 0;
}