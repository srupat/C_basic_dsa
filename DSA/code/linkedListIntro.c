#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

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

    linkedListTraversal(head);
    return 0;
}