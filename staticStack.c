#include "staticStack.h"

#define EMPTY       1
#define NOT_EMPTY   0
#define FULL        1
#define NOT_FULL    0

int isEmpty(stack_t * stack)
{
    if (stack->sp == STACK_SIZE)
    {
        return EMPTY;
    }
    return NOT_EMPTY;
}
int isFull(stack_t * stack)
{
    if (stack ->sp == 0)
    {
        return FULL;
    }
    return NOT_FULL;
}

void stackInit(stack_t * stack)
{
    // full descending
    stack -> sp = STACK_SIZE;
}
void stackPush(stack_t * stack , int data)
{
    if (isFull(stack) != FULL)
    {
        stack -> sp --;
        stack -> arr[ stack->sp] = data;
    }
}

int stackPop(stack_t * stack)
{
    int data ;
    if (isEmpty(stack) != EMPTY)
    {
        data = stack->arr[ stack -> sp];
        stack -> sp ++;
    }
    return data;
}

int stackPeak(stack_t * stack)
{
        int data ;
    if (isEmpty(stack) != EMPTY)
    {
        data = stack->arr[ stack -> sp];
    }
    return data;
}

void printStack(stack_t * stack)
{
    int sp = stack ->sp;
    printf("\n[ TOP ] -> ");
    for (int i= sp;i<STACK_SIZE ; i++)
    {
        printf("%d -> ", stack->arr[i]);
    }
    printf("[ BOTTOM ]\n");
}