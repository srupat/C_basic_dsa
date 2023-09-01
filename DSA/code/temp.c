#include<stdio.h>
#include<stdlib.h>
int ch;
void insert_at_beg();
void insert_at_end();
void insert_at_position();
void delete_from_beg();
void delete_from_end();
void delete_from_position();
void display();

int main()
{
    while(1)
   {
    
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert_at_beg();
        break;
        case 2:insert_at_end();
        break;
        case 3:insert_at_position();
        break;
        case 4:delete_from_beg();
        break;
        case 5:delete_from_end();
        break;
        case 6:delete_from_position();
        break;
        case 7:display();
        break;
        case 8:exit(1);
        break;
    }
   }
    return 0;
}
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert_at_beg()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    //printf("Enter the num to be inserted :");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
}

void insert_at_end()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    // printf("Enter the num to be inserted :");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }
}
void insert_at_position()
{
    struct node *ptr,*temp;
    int item,location,i;
    ptr=(struct node *)malloc(sizeof(struct node));
    // printf("Enter the num to be inserted :");
    scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    // printf("Enter the location :");
    scanf("%d",&location);
    temp=head;
    for(i=0;i<location;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}

void delete_from_beg()
{
    struct node *ptr;
    if(head==NULL)
    {
        // printf("List is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else{
        ptr=head;
        head=ptr->next;
        // printf("Deleted Node=%d",ptr->data);
        free(ptr);
    }
}
void delete_from_end()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        // printf("List is empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        // printf("Deleted node=%d",ptr->data);
        free(ptr);
    }
}
void delete_from_position()
{
    int location,i;
    struct node *ptr,*temp;
    // printf("Enter location from which you want to delete node :");
    scanf("%d",&location);
    ptr=head;
    for(i=0;i<location;i++)
    {
        temp=ptr;
        ptr=ptr->next;
        temp->next=ptr->next;
        printf("%d",ptr->data);
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        // printf("No Node Available");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}