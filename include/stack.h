#ifndef __stack__h
#define __stack__h

typedef struct _Element Element;
typedef struct _Stack Stack;

Stack *stack_define();
int stack_push(Stack *stack, int data);
int stack_pop(Stack *stack, int *data);
void stack_show(Stack *stack);
void stack_clean_memory(Stack *stack);

#endif