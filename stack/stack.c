#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int top;
    int maxTop;
    int *data;
}stack_t;

void create_stack(stack_t *st, int size){
    st->top=-1;
    st->maxTop=size-1;
    st->data=(int *)malloc(sizeof(int)*size);
}

int isEmpty(stack_t *st)
{
    if (st->top == -1)
        return 1;
    return 0;
}

int isFull(stack_t *st)
{
    if (st->top == st->maxTop)
        return 1;
    return 0;
}

void push(stack_t *st, int num)
{
    if (isFull(st) == 1)
        printf("The stack is full.\n");
    else
        st->data[++st->top]=num;
}

int pop(stack_t *st)
{
    if (isEmpty(st) == 1)
        printf("The stack is empty.\n");
    else
        return (st->data[st->top--]);
}

void print(stack_t *st)
{
    if (isEmpty(st) == 1)
        printf("The stack is empty.\n");
    else
	{
        int i;
        printf("stack=");
        for (i=0; i<=st->top; i++)
            printf("%d ", st->data[i]);
        printf("\n");
    }
}


int main()
{
    int i;
    stack_t *obj=(stack_t *)malloc(sizeof(stack_t));

    printf("Create a stack.\n");
    create_stack(obj, 20);
    printf("Push data\n");
    for(i=0;i<10;i++)
        push(obj,i);
    print(obj);
    printf("pop=%d:\n", pop(obj));
    print(obj);
    printf("pop=%d:\n", pop(obj));
    print(obj);
    return 0;
}
