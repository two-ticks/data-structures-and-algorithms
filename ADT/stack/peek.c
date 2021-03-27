#include <stdio.h>
#include <stdlib.h>

//LIFO

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int array_index = sp->top - i + 1;
    if (array_index < 0)
    {
        printf("invalid position");
        return -1;
    }
    else
    {
        return sp->arr[array_index];
    }
}

int main()
{
    //printf("main\n");

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    //printf("Stack created!\n");

    push(sp, 5);
    push(sp, 15);
    push(sp, 25);
    push(sp, 115);

    //printf("%d\n",isFull(sp));
    //printf("%d",isEmpty(sp));
    //printf("%d",pop(sp));

    //printing stack
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("Value at position %d is %d\n", j, peek(sp, j));
    }

    return 0;
}