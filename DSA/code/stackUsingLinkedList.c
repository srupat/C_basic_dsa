#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};
struct Node * top = NULL;
int isEmpty(struct Node * top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node * top)
{
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else return 0;
}
void linkedListTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * push(struct Node * top,int x)
{
    if(isFull(top)){
        printf("Stack overflow\n");
    }
    else
    {
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->next = top;
        n->data = x;
        top = n;
        return top;
    }
}
int pop(struct Node* tp)
{
    if(isEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

int stackTop()
{
    return top->data;
}

int peek(int pos)
{
    struct Node * ptr = top;
    for (int i = 0; i < pos -1 && ptr!=NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr!=NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
}


void stackBottom(struct Node * ptr)
{
   
   while(ptr->next!=NULL)
   {
    ptr = ptr->next;
   } 
   printf("The bottom-most element is %d\n",ptr->data);
}

int main()
{
    //struct Node * top = NULL;
    top = push(top,28);
    top = push(top,18);
    top = push(top,15);
    top = push(top,7);
    // int element = pop(top);
    // printf("popped element is %d\n",element);
    for(int i=1;i<=4;i++)
    {
        printf("Value at position %d is %d\n",i,peek(i));
    }
    //linkedListTraversal(top);
    printf("The topmost element is %d\n",stackTop());
    stackBottom(top);
    return 0;
}