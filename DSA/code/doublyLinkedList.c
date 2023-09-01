#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;    
};

void dLinkedListTraversal(struct Node * ptr)
{
    //struct Node * ptr = n1;
    while (ptr->next != NULL)
    {
        printf("The element is : %d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("The element is : %d\n",ptr->data);
    // printf("\n");
    // printf("Now do it with a twist \n");
    // printf("\n");
    while (ptr != NULL)
    {
        printf("The element is : %d\n",ptr->data);
        ptr = ptr->prev;
    }
      
}
struct Node * insertInBetween(struct Node *head,int val,int pos)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data = val;
    int i=0;
    while(i!=pos-1)
    {
        p = p->next;
        i++;
    }
    p->next->prev = ptr;
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    // ptr->prev = p;
    return head;
}

int main()
{
    //create nodes
    struct Node * n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node * n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node * n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node * n4 = (struct Node *)malloc(sizeof(struct Node));

    //link nodes
    n1->prev = NULL;
    n1->data = 55;
    n1->next = n2;

    n2->prev = n1;
    n2->data = 72;
    n2->next = n3;

    n3->prev = n2;
    n3->data = 4;
    n3->next = n4;

    n4->prev = n3;
    n4->data = 30;
    n4->next = NULL;

    // dLinkedListTraversal(n1);
    insertInBetween(n1,43,2);
    dLinkedListTraversal(n1);
    
    return 0;
}