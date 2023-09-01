#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {
        printf("Element is %d \n",ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    
}

struct Node * insertAtFirst(struct Node * head,int data)
{
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to the last node 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    third->data = 6;
    third->next = fourth;
 
    fourth->data = 1;
    fourth->next = head;
    printf("Before : \n");
    linkedListTraversal(head);
    head = insertAtFirst(head,54);
    //head = insertAtFirst(head,32);
    //head = insertAtFirst(head,100);
    printf("After : \n");
    linkedListTraversal(head);
    return 0;
}