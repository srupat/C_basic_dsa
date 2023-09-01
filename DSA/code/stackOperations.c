#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}
int isEmpty(struct stack * ptr)
{
    if (ptr->top == -1){
        return 1;
    }
    return 0;
}

int peek(struct stack *ptr,int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not possible\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    
    
}

int pop(struct stack * ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}


int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp,45);
    push(sp,55);
    push(sp,65);
    push(sp,43);
    push(sp,98);
 
    printf("%d\n",stackTop(sp));
    printf("%d\n",stackBottom(sp));
    for (int j = 1; j <= sp->top+1; j++)
    {
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }
        
    return 0;
}