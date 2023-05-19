#include "staticStack.h"


int 
main(void)
{
    stack_t st1={0};
    stackInit( & st1);
    printStack(&st1);
    stackPush(&st1 , 10);
    stackPush(&st1 , 20);
    stackPush(&st1 , 30);
    stackPush(&st1 , 40);
    stackPush(&st1 , 50);
    printStack(&st1);
    stackPop(&st1);
    printStack(&st1);
    stackPop(&st1);
    printStack(&st1);
    // for (int i=99; i>0; i--)
    // {
    //     printf("%d -> ", st1.arr[i]);
    // }

    stackPush(&st1 , 55);
    printStack(&st1);


    //     for (int i=99; i>0; i--)
    // {
    //     printf("%d -> ", st1.arr[i]);
    // }
}