#include "stack.h"

#include <stdlib.h>
#include <stdio.h>

struct _Element
{
    int data;
    Element *previous;
};

struct _Stack
{
    Element *top;
    int size;
};

Stack *stack_define()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));

    if (stack != NULL)
    {
        stack->top = NULL;
        stack->size = 0;
    }

    return stack;
}

int stack_push(Stack *stack, int data)
{
    if (stack == NULL)
        return 0;

    Element *element = (Element *)malloc(sizeof(Element));
    if (element == NULL)
        return 0;

    element->data = data;
    element->previous = stack->top;
    stack->top = element;
    stack->size++;

    return 1;
}

int stack_pop(Stack *stack, int *data)
{
    if (stack == NULL || stack->size == 0)
        return 0;

    Element *element = stack->top;
    stack->top = element->previous;
    stack->size--;

    if (data != NULL)
        *data = element->data;

    free(element);

    return 1;
}

void stack_show(Stack *stack)
{
    if (stack == NULL)
    {
        printf("Pilha não alocada\n");
        return;
    }

    int empty_stack = stack->size == 0;
    if (empty_stack)
    {
        printf("Pilha vazia\n");
        return;
    }

    Element *actual = stack->top;

    while (actual != NULL)
    {
        if (actual->previous == NULL)
            printf("%i\n", actual->data);
        else
            printf("%i ", actual->data);

        actual = actual->previous;
    }
}

void stack_clean_memory(Stack *stack)
{
    if (stack == NULL)
        return;

    Element *element = stack->top;

    while (element != NULL)
    {
        Element *aux = element->previous;
        free(element);
        element = aux;
    }

    free(stack);
}