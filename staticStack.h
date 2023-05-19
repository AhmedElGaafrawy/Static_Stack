#include <stdio.h>

#define STACK_SIZE          100

typedef struct stack
{
    int arr [ STACK_SIZE ];
    int sp;
}stack_t;

void stackInit(stack_t * stack);
void stackPush(stack_t * stack , int data);
int stackPop(stack_t * stack);
int stackPeak(stack_t * stack);

void printStack(stack_t * stack);