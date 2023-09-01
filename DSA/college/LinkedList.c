#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void insertAtBeginning(struct Node * head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head==NULL)
    {
        head = ptr;
    }
    ptr->data = data;
    ptr->next = head->next;
    head->next = ptr;
}

void insertAtEnd(struct Node * head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    ptr->data = data;
    struct Node * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL; 

}

void insertAtPosition(struct Node * head,int data, int pos)
{
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * temp = head;
    int count = 0;
    while (count!=pos-1)
    {
        temp = temp->next;
        count++;
    }
    if(count==0)
    {
        insertAtBeginning(head,data);
        return;
    }
    else{
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    }
}

void linkedListTraversal(struct Node * ptr)
{
    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    head = NULL;
    int ch,n,pos;
    
    while (1)
    {
        printf("Enter 1 for inserting at beginning\nEnter 2 for inserting at end\nEnter 3 for inserting at position\nEnter 4 to display\nEnter 5 to exit\n");
        scanf("%d",&ch);
        switch(ch)
    {
        case 1: 
        printf("Enter the element to insert at beginning\n");
        scanf("%d",&n);
        insertAtBeginning(head,n);
        break;
        case 2:
        printf("Enter the element to insert at end\n");
        scanf("%d",&n);
        insertAtEnd(head,n);
        break;
        case 3:
        printf("Enter the element to insert at specific position\n");
        scanf("%d",&n);
        printf("Enter the pos\n");
        scanf("%d",&pos);
        insertAtPosition(head,n,pos);
        break;
        case 4:
        linkedListTraversal(head);
        break;
        case 5:
        exit(1);
        break;
        default:
        printf("Invalid\n");
        break;
    }

    }
    
    // insertAtBeginning(head,10);
    // insertAtPosition(head,37,2);
    // insertAtPosition(head,89,1);
    // insertAtEnd(head,32);
    // insertAtEnd(head,56);
    // linkedListTraversal(head);
    return 0;
}