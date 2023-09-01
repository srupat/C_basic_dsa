#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

// Case 1
struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// case 3
struct Node * insertAtEnd(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while(p->next != NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// case 4

struct Node * insertAfterNode(struct Node * head, struct Node * prevNode, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

// case 2
 
struct Node * insertAtIndex(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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
    head->data = 7;
    head->next =second;

    //link second and third nodes
    second->data = 11;
    second->next =third;

    //link thrid and fourth nodes
    third->data = 66;
    third->next = fourth;
 
    fourth->data = 29;
    fourth->next = NULL;
    printf("Linked list before insertion : \n");
    linkedListTraversal(head);
    //head = insertAtFirst(head, 56);
    //head = insertAtIndex(head , 56 , 1);
    //head = insertAtEnd(head,56);
    head = insertAfterNode(head, third, 38);
    printf("Linked list after insertion : \n");
    linkedListTraversal(head);
    return 0;
}

