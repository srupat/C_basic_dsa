#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * firstNodeDeletion(struct Node * head)
{
    //struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    
    struct Node * ptr = head;
    //ptr->data = head->data;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * betNodeDeletion(struct Node * head, int index)
{
    struct Node * p=head;
    int i=0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    struct Node * q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct Node * lastNodeDeletion(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = p->next;
    int i=0;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * valNodeDeletion(struct Node * head,int value)
{
    struct Node * p = head;
    struct Node * q = p->next;
    
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if (q->data==value)
    {
        p->next = q->next;
        free(q);
    }
    
    return head;
}

void linkedListTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;

    }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    // allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));  
    fourth=(struct Node*)malloc(sizeof(struct Node));
    //link first and second nodes
    head->data = 4;
    head->next =second;

    //link second and third nodes
    second->data = 3;
    second->next =third;

    //link thrid and fourth nodes
    third->data = 8;
    third->next = fourth;
 
    fourth->data = 1;
    fourth->next = NULL;
    printf("Linked list before deletion : \n");
    linkedListTraversal(head);
    //head = firstNodeDeletion(head);
    //head=betNodeDeletion(head,1);
    //head = lastNodeDeletion(head);
    head = valNodeDeletion(head,1);
    printf("Linked list after deletion : \n");
    linkedListTraversal(head);
    return 0;
}

